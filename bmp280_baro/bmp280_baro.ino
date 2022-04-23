
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
 *  
 *  Tiny4kOLED 1.5.4
 */

//#define USE_BIG_FONT
 
#include <TinyWireM.h>
#include <Tiny4kOLED.h>

#ifdef USE_BIG_FONT
#include <font16x32digits.h>
#else
#include <PixelOperatorBold.h>
#endif

#include <forcedClimate.h>

ForcedClimate cSensor = ForcedClimate(TinyWireM, 0x76);
unsigned long ct, pt, tt;
int32_t temp;
uint32_t ps;
int cnt_ps=0;
int py=0;

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
#ifdef USE_BIG_FONT
  oled.setCursor(0,0);
#else
  oled.setCursor(0,py);
  oled.print("                ");
int randx=random(16);
int randy=random(2);
  oled.setCursor(randx,randy);
#endif
  oled.print(ps/100);
  oled.print(".");
  oled.print(ps%100);
#ifndef USE_BIG_FONT
  oled.print(" hPa");
#endif
  oled.switchRenderFrame();

#ifdef USE_BIG_FONT
  oled.setCursor(0,0);
#else
  oled.setCursor(0,py);
  oled.print("                ");
  oled.setCursor(randx,randy);
#endif
  oled.print(temp/100);
  oled.print(".");
  oled.print(temp%100);
#ifndef USE_BIG_FONT
  oled.print(" Celsius");
  py=randy;
#endif
  oled.switchRenderFrame();

  oled.switchDisplayFrame();
  oled.switchDisplayFrame();
  delay(100);
}

void updateData() {
  ct=millis();
  if(cnt_ps==0) {
    cSensor.takeForcedMeasurement();
    ps=cSensor.getPressure();
    temp=cSensor.getTemperatureCelcius();    
  } else {
    temp=cSensor.getTemperatureCelcius(true); // true when read one value only
  }
  cnt_ps++;
  cnt_ps&=7;
  updateDisplay();
  delay(500);
}

void setup() {
  pt=millis();
  tt=pt;
  TinyWireM.begin();
  oled.begin(128, 64, sizeof(tiny4koled_init_128x64r), tiny4koled_init_128x64r);
  delay(500);
#ifdef USE_BIG_FONT
  oled.setFont(FONT16X32DIGITS);
#else
  oled.setFont(FONT8X16POB);
#endif
  oled.setContrast(70);
  oled.on();
  // clear display buffer
  oled.clear();
  oled.switchRenderFrame();
  oled.clear();
  oled.switchRenderFrame();
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
