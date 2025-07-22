void printMyTime (){
    Serial.print("RTC Time: ");                     
    Serial.print(myRTC.hours);                                                                              
    Serial.print(":");                                                                                      
    Serial.print(myRTC.minutes);                                                                            
    Serial.print(":");                                                                                      
    Serial.print(myRTC.seconds);
}
