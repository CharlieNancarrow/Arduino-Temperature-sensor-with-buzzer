int buzzer = 11; //buzzer pin
int heatSensorValue = 0; //input from heat sensor
float buzzer = LOW;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT) //declares buzzer as an output

}

void loop() {
  // put your main code here, to run repeatedly:
  heatSensorValue = analogRead(A0);
  Serial.println(heatSensorValue); //prints heat sensor value to console
  if (heatSensorValue < 600) {
    tone(buzzer, 1000, 500);

  }

}
