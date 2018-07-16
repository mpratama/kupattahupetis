/*
 * Kupat Tahu Petis - Kupakai Atmega TigaDuaDelapan Untuk Penjetrak-jetrek Otomatis
 * Deskripsi: Ini hanyalah contoh mengendalikan relay module menggunakan delay function arduino
 * Ditulis oleh: Arif M, Apt.
 * Repo: github.com/mpratama/kupattahupetis
 */
 
const int pR = 7; //nomor pin relay
unsigned long detik = 1000L;
unsigned long menit = detik * 60;
//unsigned long jam = menit * 60;

unsigned long w_nyala(double nyala) {
  return (nyala * menit);
  }

unsigned long w_mati(double mati) {
  return (mati * menit);
  }

// konfigurasi pin
void setup() {
  //menggunakan pin no 7 sbg output relay
  pinMode(pR, OUTPUT);
}

// loop
void loop() {
  digitalWrite(pR, LOW);   // LOW pompa menjadi nyala karena menggunakan normally open
  delay(w_nyala(60));     // masukkan parameter dalam menit
  digitalWrite(pR, HIGH);    // PUTUSKAN JALUR
  delay(w_mati(0.2));      // masukkan parameter dalam menit
}
