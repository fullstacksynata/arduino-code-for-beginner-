int pinTombol = 2;
int pinLampu = 13;

void setup()
{
  // INPUT_PULLUP mengaktifkan resistor internal Arduino
  pinMode(pinTombol, INPUT_PULLUP);
  pinMode(pinLampu, OUTPUT);
}

void loop()
{
  // Membaca status tombol (LOW artinya sedang ditekan)
  int statusTombol = digitalRead(pinTombol);

  if (statusTombol == LOW) {
    digitalWrite(pinLampu, HIGH); // Nyalakan lampu saat tombol ditekan
  } else {
    digitalWrite(pinLampu, LOW);  // Matikan lampu saat tombol dilepas
  }
}
