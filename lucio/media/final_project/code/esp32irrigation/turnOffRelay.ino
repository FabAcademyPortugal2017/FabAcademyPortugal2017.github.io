int turnOffRelay(const int pinValveRelay, int pumpNumber){
  // wait then turn valve relay OFF
  Serial.print("Waiting ");
  Serial.print(waitTimeValveOff / 1000);
  Serial.println("s before deactivating Valve Relay.");
  delay(waitTimeValveOff); //delay(waitTimeValveOff);
  digitalWrite(pinValveRelay, LOW);
  int valveState = 0;
  return valveState;
  Serial.print("*** Valve Relay ");
  Serial.print(pumpNumber);
  Serial.println("turned OFF ***");
}