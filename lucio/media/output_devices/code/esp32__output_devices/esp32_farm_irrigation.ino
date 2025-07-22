//libraries
#include <virtuabotixRTC.h>

//Settings
virtuabotixRTC myRTC(5, 18, 19);// (CLK,DAT,RST)
int pumprelayPin1 = 22;


//run once
void setup() {

   Serial.begin(115200);
   
myRTC.setDS1302Time(50, 15, 16, 6, 24, 5, 2020); // sets seconds, minutes, hours (24h mode), day of the week, day, month, year) comment after first compile
  
  pinMode(pumprelayPin1, OUTPUT);
  
}

//run in loop
void loop() {
  myRTC.updateTime();//updates time
  Serial.print("Current Time: ");
  Serial.print(myRTC.hours);
  Serial.print(":");
  Serial.print(myRTC.minutes);
  Serial.print(":");
  Serial.print(myRTC.seconds);
  Serial.println();
  delay (1000);
//condition (logic test)
if ((myRTC.minutes) == 16) digitalWrite(pumprelayPin1, HIGH);  
if ((myRTC.minutes) >= 17) digitalWrite(pumprelayPin1, LOW);

}
