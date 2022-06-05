// BERKAY GÜZEL 171519008

const int trigger_pin = 8;
const int echo_pin = 9;

int sure;
int mesafe;

void setup() {
  pinMode(trigger_pin, OUTPUT);
  pinMode(echo_pin, INPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigger_pin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigger_pin, LOW);
  sure = pulseIn(echo_pin, HIGH);
  mesafe = (sure/2) / 29.1;

 
  Serial.println(mesafe);
  delay(50);

}
