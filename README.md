# drone-havuz-uzakl-
Katıldığımız teknofest projesinde döner kanat ihamızın mavi havuza(su doldurma) havuzundan su alıp kırmızı(su boşaltma) havuzunda suyu bosaltma işlemini yapmak.
Bunu yaparken de drone yüksekliği 0-30 cm arasında 1.ledi yakmak(araç havuza yakın). 31-60 cm uzaklığında ikinci ledi yakmak(araç havuza uzak) ve son olarak 0-300cm arasında üçüncü ledi yakmaktır(arac havuza çok uzak).
Drone yükseklik mesafesi gösterge panelinde ledler yakılırken de gösterilmiştir.
Bu projenin yapılmasının amacı itfaye merdivenlerinin ulaşamadığı yüksek noktalara ve itfaye araçlarının ulaşamadığı engebeli arazilere insan hayatını tehlikeye atmadan uzaktan en hızlı ve güvenilir bir şekilde müdahale etmektir.

Ekeran resimlerini açtığınızda resmi alttan sağa doğru kaydırınız.

// BERKAY GÜZEL 171519008  Arduino kodu

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
