
#include <ATTinyCore.h>
#include <avr/wdt.h>
#include <avr/sleep.h>
#include <avr/interrupt.h>

/*
 *  ATTiny85
 *  5 - SDA, 7 - SCL
 *  
 *  no bootloader, internal clock 1MHz
 *  LTO disabled
 *  BOD disabled
 */
 
#include <TinyWireM.h>
#include <Tiny4kOLED.h>
#include <font16x32digits.h>

#include <forcedClimate.h>

ForcedClimate cSensor = ForcedClimate(TinyWireM, 0x76);
unsigned long ct, pt, tt;
int32_t temp;
uint32_t ps;

bool checkmillis(unsigned long c, unsigned long *p, unsigned long limit) {
  unsigned long vt;
  if(c<*p) {
    vt=~*p+c+1;
  } else {
    vt=c-*p;
  }
  if(vt>=limit) {
    *p=c;
    return true;
  } else
    return false;
}



void updateDisplay() { 
  oled.setCursor(0,0);
  oled.print(temp/100);
  oled.print(".");
  oled.print(temp%100);
  oled.switchRenderFrame();
  oled.setCursor(0,0);
  oled.print(ps/100);
  oled.print(".");
  oled.print(ps%100);
  oled.switchRenderFrame();
  // display frames
  oled.switchDisplayFrame();
  oled.switchDisplayFrame();
  delay(100);
}

void updateData() {
  ct=millis();
  if(checkmillis(ct,&pt,60000)) {
    if(checkmillis(ct,&tt,8000)) {
      cSensor.takeForcedMeasurement();
      ps=cSensor.getPressure();
      temp=cSensor.getTemperatureCelcius();
    } else
      ps=cSensor.getPressure(true);
    updateDisplay();
  } else
  if(checkmillis(ct,&tt,8000)) {
    temp=cSensor.getTemperatureCelcius(true); // true when read one value only
    updateDisplay();
  }
  delay(500);
}

void setup() {
  pt=millis();
  tt=pt;
  TinyWireM.begin();
  oled.begin(128, 64, sizeof(tiny4koled_init_128x64r), tiny4koled_init_128x64r);
  delay(500);
  oled.setFont(FONT16X32DIGITS);
  oled.clear();
  oled.switchRenderFrame();
  oled.setContrast(70);
  oled.on();
  cSensor.begin();

  cSensor.takeForcedMeasurement();
  ps=cSensor.getPressure();
  temp=cSensor.getTemperatureCelcius();
  updateDisplay();

  ADCSRA &= ~(1<<ADEN);
  // watchdog interrupt
  wdt_reset();
  wdt_enable(WDTO_8S);
  WDTCR |= _BV(WDIE);
  sei();
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
}

void loop() {
  updateData();
  sleep_enable();
  sleep_cpu();
}

ISR (WDT_vect) {
  WDTCR |= _BV(WDIE);
}
