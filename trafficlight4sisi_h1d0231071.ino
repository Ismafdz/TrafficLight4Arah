int mUtara = 11, kUtara = 12, hUtara = 13;
int mTimur = 2,  kTimur = 3,  hTimur = 4;
int mSelatan = 5, kSelatan = 6, hSelatan = 7;
int mBarat = 8,  kBarat = 9,  hBarat = 10;

void setup() {
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
  semuaMerah(); 
}

void loop() {
  aktifkanSimpang(mUtara, kUtara, hUtara);
  aktifkanSimpang(mTimur, kTimur, hTimur);
  aktifkanSimpang(mSelatan, kSelatan, hSelatan);
  aktifkanSimpang(mBarat, kBarat, hBarat);
}

void aktifkanSimpang(int pinM, int pinK, int pinH) {
  semuaMerah(); 
  
  //Lampu Hijau menyala 5 detik 
  digitalWrite(pinM, LOW);
  digitalWrite(pinH, HIGH);
  delay(5000);
  digitalWrite(pinH, LOW);

  //Lampu Kuning kedip 3 kali selama total 2 detik 
  for(int i = 0; i < 3; i++) {
    digitalWrite(pinK, HIGH);
    delay(333); 
    digitalWrite(pinK, LOW);
    delay(333);
  }
  
  //Kembali ke Merah
  digitalWrite(pinM, HIGH);
}

void semuaMerah() {
  digitalWrite(mUtara, HIGH); digitalWrite(kUtara, LOW); digitalWrite(hUtara, LOW);
  digitalWrite(mTimur, HIGH); digitalWrite(kTimur, LOW); digitalWrite(hTimur, LOW);
  digitalWrite(mSelatan, HIGH); digitalWrite(kSelatan, LOW); digitalWrite(hSelatan, LOW);
  digitalWrite(mBarat, HIGH); digitalWrite(kBarat, LOW); digitalWrite(hBarat, LOW);
}