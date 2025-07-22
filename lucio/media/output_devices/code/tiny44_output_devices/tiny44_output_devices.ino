//libraries
#include <virtuabotixRTC.h>
#include <SoftwareSerial.h>

//Settings
virtuabotixRTC myRTC(3, 8, 7);// (CLK,DAT,RST)
int pumprelayPin1 = 2;
SoftwareSerial Monitor(1, 0);

//run once
void setup() {

   Monitor.begin(115200);
   
myRTC.setDS1302Time(50, 15, 16, 6, 24, 5, 2020); // sets seconds, minutes, hours (24h mode), day of the week, day, month, year) comment after first compile
  
  pinMode(pumprelayPin1, OUTPUT);
  
}

//run in loop
void loop() {
  myRTC.updateTime();//updates time
  Monitor.print("Current Time: ");
  Monitor.print(myRTC.hours);
  Monitor.print(":");
  Monitor.print(myRTC.minutes);
  Monitor.print(":");
  Monitor.print(myRTC.seconds);
  Monitor.println();
  delay (1000);
//condition (logic test)
if ((myRTC.minutes) == 16) digitalWrite(pumprelayPin1, HIGH);  
if ((myRTC.minutes) >= 17) digitalWrite(pumprelayPin1, LOW);

}
