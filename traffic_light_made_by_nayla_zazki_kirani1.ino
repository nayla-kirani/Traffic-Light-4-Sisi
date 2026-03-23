// Pin konfigurasi untuk setiap jalur
int merah1 = 2, kuning1 = 3, hijau1 = 4;
int merah2 = 5, kuning2 = 6, hijau2 = 7;
int merah3 = 8, kuning3 = 9, hijau3 = 10;
int merah4 = 11, kuning4 = 12, hijau4 = 13;

void setup() {
  // Atur semua pin sebagai output
  pinMode(merah1, OUTPUT); pinMode(kuning1, OUTPUT); pinMode(hijau1, OUTPUT);
  pinMode(merah2, OUTPUT); pinMode(kuning2, OUTPUT); pinMode(hijau2, OUTPUT);
  pinMode(merah3, OUTPUT); pinMode(kuning3, OUTPUT); pinMode(hijau3, OUTPUT);
  pinMode(merah4, OUTPUT); pinMode(kuning4, OUTPUT); pinMode(hijau4, OUTPUT);

  // Matikan semua lampu saat awal
  matikanSemuaLampu();
}

void loop() {
  // Jalur 1 Hijau, Jalur lain Merah
  nyalakanLampu(hijau1, merah2, merah3, merah4);
  delay(3000); // Lampu Hijau selama 5 detik
  nyalakanLampu(kuning1, merah2, merah3, merah4);
  delay(1000); // Lampu Kuning selama 2 detik

  // Jalur 2 Hijau, Jalur lain Merah
  nyalakanLampu(hijau2, merah1, merah3, merah4);
  delay(3000);
  nyalakanLampu(kuning2, merah1, merah3, merah4);
  delay(1000);

  // Jalur 3 Hijau, Jalur lain Merah
  nyalakanLampu(hijau3, merah1, merah2, merah4);
  delay(3000);
  nyalakanLampu(kuning3, merah1, merah2, merah4);
  delay(1000);

  // Jalur 4 Hijau, Jalur lain Merah
  nyalakanLampu(hijau4, merah1, merah2, merah3);
  delay(3000);
  nyalakanLampu(kuning4, merah1, merah2, merah3);
  delay(1000);
}

// Fungsi untuk menyalakan lampu sesuai kondisi jalur
void nyalakanLampu(int hijau, int merah1, int merah2, int merah3) {
  matikanSemuaLampu();
  digitalWrite(hijau, HIGH);
  digitalWrite(merah1, HIGH);
  digitalWrite(merah2, HIGH);
  digitalWrite(merah3, HIGH);
}

// Fungsi untuk mematikan semua lampu
void matikanSemuaLampu() {
  digitalWrite(merah1, LOW); digitalWrite(kuning1, LOW); digitalWrite(hijau1, LOW);
  digitalWrite(merah2, LOW); digitalWrite(kuning2, LOW); digitalWrite(hijau2, LOW);
  digitalWrite(merah3, LOW); digitalWrite(kuning3, LOW); digitalWrite(hijau3, LOW);
  digitalWrite(merah4, LOW); digitalWrite(kuning4, LOW); digitalWrite(hijau4, LOW);
}