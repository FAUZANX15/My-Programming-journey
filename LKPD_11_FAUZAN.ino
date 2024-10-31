const int trigpin = 15;
const int echoPin = 2;

void setup() {
  Serial.begin(115200);
  pinMode(trigpin, OUTPUT);
  pinMode(echoPin, INPUT);

}
void loop() {
  long duration, distance;
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034/2;
  if (distance > 200){
    Serial.println("tidak ada objek terdeteksi");
    }else{
      Serial.print("jarak : ");
      Serial.print(distance);
      Serial.println(" cm");}
      delay(500);}
   
