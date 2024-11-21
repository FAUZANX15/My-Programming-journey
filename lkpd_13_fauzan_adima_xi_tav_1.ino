fauzan adima 
xi tav 1

#define MQ2pin 16 // Mendefimsikan pin yang terhubung ke sensor
int sensorValue; // Variabel untuk menyimpan nilai sensor
void setup() {
Serial.begin(9600); // Mulai komunikasi serial dengan kecepat Serial.println("Memanaskan MQ2"); // Cetak pesan "Memanaskan serial
delay(20000);}
void loop() { sensorValue = digitalRead(MQ2pin);
Serial.print("Digital Output: ");
Serial.print(sensorValue);
if (sensorValue) {
Serial.println(" | Smoke/Gas: Tidak Terdeteksi");
} else {
Serial.println(" | Smoke/Gas: Terdeteksi!");}
delay(2000);}
