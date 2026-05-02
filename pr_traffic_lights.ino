void setup() {
  pinMode(10, OUTPUT); //red diode
  pinMode(9, OUTPUT); //orange diode
  pinMode(8, OUTPUT); // green diode

  pinMode(7, INPUT_PULLUP); //button

  digitalWrite(10, LOW); //turning off the diods
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
}

void loop() {
  //green on
  digitalWrite(10, LOW); 
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);

  delay(500);
  while (digitalRead (7) == HIGH) {} // wait for click the button
  //orange on
  
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH); 
  digitalWrite(8, LOW); 

  delay(500);
  while (digitalRead (7) == HIGH) {}
  //red on
 
  digitalWrite(10, HIGH); //red
  digitalWrite(9, LOW); //orange
  digitalWrite(8, LOW); //green

  delay(500);
  while (digitalRead (7) == HIGH) {}
  
  digitalWrite(10, HIGH); //red
  digitalWrite(9, HIGH); //orange
  digitalWrite(8, LOW); //green

  delay(500);
  while (digitalRead(7) == HIGH) {}
  

}
