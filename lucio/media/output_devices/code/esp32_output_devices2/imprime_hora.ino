void imprime_hora ()
{
  Serial.print("Current Time: ");
  Serial.print(myRTC.hours);
  Serial.print(":");
  Serial.print(myRTC.minutes);
  Serial.print(":");
  Serial.print(myRTC.seconds);
  Serial.println();
  delay (1000);
}
