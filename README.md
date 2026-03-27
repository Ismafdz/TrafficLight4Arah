# Kendali GPIO: Traffic Light 4 Arah (Arduino Uno)

Proyek ini adalah simulasi sistem kendali lampu lalu lintas empat persimpangan menggunakan **Arduino Uno**. [cite_start]Proyek ini disusun untuk memenuhi **Tugas 3 Mata Kuliah Pemrograman Sistem Tertanam**, Program Studi Teknik Komputer, Universitas Jenderal Soedirman. [cite: 847]

## Deskripsi Proyek
[cite_start]Sistem ini mengendalikan 12 LED (Merah, Kuning, Hijau) pada empat sisi simpang (Utara, Timur, Selatan, Barat) secara otomatis dan berulang (*looping*). [cite: 868] [cite_start]Urutan nyala lampu dirancang searah jarum jam untuk menjamin kelancaran arus lalu lintas dan mencegah konflik antar simpang sesuai standar keselamatan. [cite: 869, 875]

## Spesifikasi Sistem
* [cite_start]**Urutan Nyala**: Utara → Timur → Selatan → Barat. [cite: 869]
* [cite_start]**Durasi Hijau**: 5 Detik. [cite: 871]
* [cite_start]**Durasi Kuning**: 2 Detik dengan efek **kedip 3 kali**. [cite: 872]
* [cite_start]**Keamanan**: Kondisi *default* semua merah sebelum satu sisi aktif untuk mencegah tabrakan simulasi. [cite: 870, 875]
* [cite_start]**Modularitas**: Menggunakan fungsi `aktifkanSimpang()` untuk efisiensi kode. [cite: 877]

## Rangkaian (Wiring Diagram)
[cite_start]Pin GPIO yang digunakan pada Arduino Uno[cite: 552]:
- **Utara**: Merah (11), Kuning (12), Hijau (13)
- **Timur**: Merah (2), Kuning (3), Hijau (4)
- **Selatan**: Merah (5), Kuning (6), Hijau (7)
- **Barat**: Merah (8), Kuning (9), Hijau (10)
- **GND**: Semua katoda LED terhubung ke pin Ground Arduino.

## Cara Menjalankan
1. Buka file `Tugas3_Yaya.ino` di repository ini.
2. *Copy* kode ke Arduino IDE atau Tinkercad.
3. Hubungkan komponen sesuai *Wiring Diagram*.
4. Klik **Start Simulation** atau **Upload** ke Board Arduino.

## Tautan Simulasi
**[https://www.tinkercad.com/things/3NUjkN6iOtA-trafficlight4sisih1d023107?sharecode=rcR99qbL3c7vfYMuKtgMtcsTt4cp-BHYEPMrcYK-b1s]**
