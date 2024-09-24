#define PHOTO_SENSOR_PIN A0
#define PHOTO_SENSOR_PIN1 A1

void setup() {
  Serial.begin(9600);
}

void loop() {
  int photo_val = analogRead(PHOTO_SENSOR_PIN);
  int photo_val1 = analogRead(PHOTO_SENSOR_PIN1);
  Serial.print("Photo val 0 = ");
  Serial.println(photo_val);
  Serial.print("Photo val 1 = ");
  Serial.println(photo_val1);
  delay(500);
}