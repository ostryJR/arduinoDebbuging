/*
By: OstryJR(Mikpos)(Mikolaj Ostrowski)
License: Colaware - It's fully free, but if you meet me, buy me a CocaCola
Last Update:2022-01-25
Version:1.0.0
My GitHub: https://github.com/ostryJR

Info( ;) ):
On digital pin, if it is not connected, can be readed random values,
more info about this: https://www.arduino.cc/reference/en/language/functions/digital-io/digitalread/ <-Notes and Warnings
On analog pin, if it is not conmnected, can be readed random value(random, but consts for this moment),
more info about this: https://www.arduino.cc/reference/en/language/functions/analog-io/analogread/
*/
void setup() {
  //for(int i=0; i<14; i++){
    //pinMode(i, INPUT);
  //}
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
  //print all pin data
  for(int i=0; i<14; i++){
    Serial.print("PIN");Serial.print(i);Serial.print(": ");Serial.println(digitalRead(i));
  }
    Serial.print("PIN A0: ");Serial.print(float(analogRead(A0)/1024.0*5.0));Serial.println("V");
    Serial.print("PIN A1: ");Serial.print(float(analogRead(A1)/1024.0*5.0));Serial.println("V");
    Serial.print("PIN A2: ");Serial.print(float(analogRead(A2)/1024.0*5.0));Serial.println("V");
    Serial.print("PIN A3: ");Serial.print(float(analogRead(A3)/1024.0*5.0));Serial.println("V");
    Serial.print("PIN A4: ");Serial.print(float(analogRead(A4)/1024.0*5.0));Serial.println("V");
    Serial.print("PIN A5: ");Serial.print(float(analogRead(A5)/1024.0*5.0));Serial.println("V");
}
