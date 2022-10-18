#define LED 13
#define POT A0

//https://wokwi.com/projects/345892922589184594

void setup() {
  pinMode(LED, OUTPUT); 
  pinMode(POT, INPUT);

  Serial.begin(9600);

}

void loop() {
  int PotValue = analogRead(POT); // Reads Potentiometer's value
  
  digitalWrite(LED, HIGH); // Turn on LED
  delay(PotValue/2); // Delay by PotValue/2
  digitalWrite(LED, LOW); // Turn off LED
  delay(PotValue/2);

}
