#include "SoftwareSerial.h"
#define VCC 5    //Supply voltage
#define R 100000  //R=100KΩ

float RT,VRT,VR;

SoftwareSerial Monitor(1, 0);

void setup() {

Monitor.begin(9600);

pinMode(0, OUTPUT);
pinMode(1, INPUT);
}

void loop() {
VRT = analogRead(3);              //Acquisition analog value of VRT
VRT = (5.00 / 1023.00) * VRT;      //Conversion to voltage
VR = VCC - VRT;
RT = ((VCC*R-R*VRT)/VRT);               //Resistance of RT

   // Monitor.println("Voltage Read:");
   // Monitor.print(VRT,10);
   // Monitor.println("Voltage drop:");
   // Monitor.print(VR,10);
   Monitor.print("Resistance:");
   Monitor.println(RT);
   
  delay(1000);
}