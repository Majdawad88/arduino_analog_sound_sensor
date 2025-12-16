//git clone https://github.com/Majdawad88/arduino_analog_sound_sensor.git

int pin = A0;
int val = 0; 

void setup() {
  Serial.begin(9600);
  pinMode(pin, INPUT);
}

void loop() {
  val = analogRead(pin);
  Serial.println(val);
  delay(200);
}
