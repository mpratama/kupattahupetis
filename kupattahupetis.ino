/*
 * Kupat Tahu Petis - Kupakai Atmega TigaDuaDelapan Untuk Penjetrak-jetrek Otomatis
 * Deskripsi: Ini hanyalah contoh mengendalikan relay module menggunakan delay function arduino
 * Ditulis oleh: Arif M, Apt.
 * Repo: github.com/mpratama/kupattahupetis
 */
 
const int pR = 7; //nomor pin relay
unsigned long detik = 1000L;
unsigned long menit = detik * 60;
unsigned long jam = menit * 60;

int waktu_nyala = 1; //VARIABEL WAKTU MENYALA
int waktu_mati = 3; // VARIABEL WAKTU MATI

void w_nyala() {
  delay(jam * waktu_nyala); //bisa diganti ke menit juga, lihat variable unsigned diatas
  }

void w_mati() {
  delay(jam * waktu_mati); //bisa diganti ke menit juga, lihat variable unsigned diatas
  }

// konfigurasi pin
void setup() {
  //menggunakan pin no 7 sbg output relay
  pinMode(pR, OUTPUT);
}

// loop
void loop() {
  digitalWrite(pR, LOW);   // LOW pompa menjadi nyala karena menggunakan normally open
  w_nyala();                       // RELAY AKAN MENYALA SELAMA 1 JAM 
  digitalWrite(pR, HIGH);    // PUTUSKAN JALUR
  w_mati();                       // RELAY AKAN MATI SELAMA 3 JAM, LALU KEMBALI NYALA 1 JAM, 
}
