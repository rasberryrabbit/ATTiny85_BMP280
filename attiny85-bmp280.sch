EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L MCU_Microchip_ATtiny:ATtiny85-20PU U2
U 1 1 60BAEF0A
P 5900 3650
F 0 "U2" H 5371 3696 50  0000 R CNN
F 1 "ATtiny85-20PU" H 5371 3605 50  0000 R CNN
F 2 "Package_DIP:DIP-8_W7.62mm" H 5900 3650 50  0001 C CIN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/atmel-2586-avr-8-bit-microcontroller-attiny25-attiny45-attiny85_datasheet.pdf" H 5900 3650 50  0001 C CNN
	1    5900 3650
	1    0    0    -1  
$EndComp
$Comp
L Regulator_Linear:AMS1117-3.3 U1
U 1 1 60BB1DAE
P 3750 3050
F 0 "U1" H 3750 3292 50  0000 C CNN
F 1 "AMS1117-3.3" H 3750 3201 50  0000 C CNN
F 2 "Package_TO_SOT_SMD:SOT-223-3_TabPin2" H 3750 3250 50  0001 C CNN
F 3 "http://www.advanced-monolithic.com/pdf/ds1117.pdf" H 3850 2800 50  0001 C CNN
	1    3750 3050
	1    0    0    -1  
$EndComp
$Comp
L Device:CP C1
U 1 1 60BB3957
P 4300 3200
F 0 "C1" H 4418 3246 50  0000 L CNN
F 1 "47u" H 4418 3155 50  0000 L CNN
F 2 "" H 4338 3050 50  0001 C CNN
F 3 "~" H 4300 3200 50  0001 C CNN
	1    4300 3200
	1    0    0    -1  
$EndComp
$Comp
L Device:C C2
U 1 1 60BB4B8A
P 4700 3200
F 0 "C2" H 4815 3246 50  0000 L CNN
F 1 "0.1u" H 4815 3155 50  0000 L CNN
F 2 "" H 4738 3050 50  0001 C CNN
F 3 "~" H 4700 3200 50  0001 C CNN
	1    4700 3200
	1    0    0    -1  
$EndComp
Wire Wire Line
	3750 3350 3750 3600
Wire Wire Line
	3750 4300 5900 4300
Wire Wire Line
	5900 4300 5900 4250
Wire Wire Line
	4300 3350 4300 3600
Wire Wire Line
	4300 3600 3750 3600
Connection ~ 3750 3600
Wire Wire Line
	3750 3600 3750 4300
Wire Wire Line
	4700 3350 4700 3600
Wire Wire Line
	4700 3600 4300 3600
Connection ~ 4300 3600
Wire Wire Line
	4050 3050 4300 3050
Wire Wire Line
	4300 3050 4700 3050
Connection ~ 4300 3050
Wire Wire Line
	4700 3050 5900 3050
Connection ~ 4700 3050
NoConn ~ 6500 3850
NoConn ~ 6500 3750
NoConn ~ 6500 3650
NoConn ~ 6500 3450
$Comp
L power:VCC #PWR01
U 1 1 60BB82B4
P 3050 2850
F 0 "#PWR01" H 3050 2700 50  0001 C CNN
F 1 "VCC" H 3065 3023 50  0000 C CNN
F 2 "" H 3050 2850 50  0001 C CNN
F 3 "" H 3050 2850 50  0001 C CNN
	1    3050 2850
	1    0    0    -1  
$EndComp
Wire Wire Line
	3050 2850 3050 3050
$Comp
L power:GND #PWR02
U 1 1 60BB9607
P 3050 4450
F 0 "#PWR02" H 3050 4200 50  0001 C CNN
F 1 "GND" H 3055 4277 50  0000 C CNN
F 2 "" H 3050 4450 50  0001 C CNN
F 3 "" H 3050 4450 50  0001 C CNN
	1    3050 4450
	1    0    0    -1  
$EndComp
Wire Wire Line
	3050 4450 3050 4300
Connection ~ 3750 4300
$Comp
L Connector:Conn_01x01_Male J3
U 1 1 60BBA638
P 7300 3250
F 0 "J3" H 7272 3182 50  0000 R CNN
F 1 "3.3V" H 7272 3273 50  0000 R CNN
F 2 "" H 7300 3250 50  0001 C CNN
F 3 "~" H 7300 3250 50  0001 C CNN
	1    7300 3250
	-1   0    0    1   
$EndComp
$Comp
L Connector:Conn_01x01_Male J4
U 1 1 60BBBBD0
P 7300 3550
F 0 "J4" H 7272 3482 50  0000 R CNN
F 1 "SCL" H 7272 3573 50  0000 R CNN
F 2 "" H 7300 3550 50  0001 C CNN
F 3 "~" H 7300 3550 50  0001 C CNN
	1    7300 3550
	-1   0    0    1   
$EndComp
$Comp
L Connector:Conn_01x01_Male J5
U 1 1 60BBC50C
P 7300 3800
F 0 "J5" H 7272 3732 50  0000 R CNN
F 1 "SDA" H 7272 3823 50  0000 R CNN
F 2 "" H 7300 3800 50  0001 C CNN
F 3 "~" H 7300 3800 50  0001 C CNN
	1    7300 3800
	-1   0    0    1   
$EndComp
$Comp
L Connector:Conn_01x01_Male J6
U 1 1 60BBCA8E
P 7300 4150
F 0 "J6" H 7272 4082 50  0000 R CNN
F 1 "GND" H 7272 4173 50  0000 R CNN
F 2 "" H 7300 4150 50  0001 C CNN
F 3 "~" H 7300 4150 50  0001 C CNN
	1    7300 4150
	-1   0    0    1   
$EndComp
Wire Wire Line
	7100 3250 7100 3050
Wire Wire Line
	7100 3050 5900 3050
Connection ~ 5900 3050
Wire Wire Line
	7100 4150 7100 4300
Wire Wire Line
	7100 4300 5900 4300
Connection ~ 5900 4300
Wire Wire Line
	6500 3350 6800 3350
Wire Wire Line
	6800 3350 6800 3800
Wire Wire Line
	6800 3800 7100 3800
Wire Wire Line
	7100 3550 6500 3550
$Comp
L Connector:Conn_01x01_Male J1
U 1 1 60BC0337
P 2550 3050
F 0 "J1" H 2522 2982 50  0000 R CNN
F 1 "5.5V" H 2522 3073 50  0000 R CNN
F 2 "" H 2550 3050 50  0001 C CNN
F 3 "~" H 2550 3050 50  0001 C CNN
	1    2550 3050
	1    0    0    1   
$EndComp
$Comp
L Connector:Conn_01x01_Male J2
U 1 1 60BC12A1
P 2550 4300
F 0 "J2" H 2522 4232 50  0000 R CNN
F 1 "GND" H 2522 4323 50  0000 R CNN
F 2 "" H 2550 4300 50  0001 C CNN
F 3 "~" H 2550 4300 50  0001 C CNN
	1    2550 4300
	1    0    0    1   
$EndComp
Wire Wire Line
	2750 3050 3050 3050
Wire Wire Line
	3050 4300 3750 4300
Wire Wire Line
	2750 4300 3050 4300
Connection ~ 3050 4300
Wire Wire Line
	3400 3050 3450 3050
Wire Wire Line
	3100 3050 3050 3050
Connection ~ 3050 3050
$Comp
L Device:D_Schottky D1
U 1 1 60BC715C
P 3250 3050
F 0 "D1" H 3250 2833 50  0000 C CNN
F 1 "1N5819" H 3250 2924 50  0000 C CNN
F 2 "" H 3250 3050 50  0001 C CNN
F 3 "~" H 3250 3050 50  0001 C CNN
	1    3250 3050
	-1   0    0    1   
$EndComp
$EndSCHEMATC
