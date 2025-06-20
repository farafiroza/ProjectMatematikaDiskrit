## Project Akhir Matematika Diskrit
Implementasi materi kombinatorial khususnya kombinasi  C(n,r) dalam bahasa C untuk menghitung kemungkinan pemilihan kelompok menggunakan bahasa c pada Visual studio code

Nama: Fara Firoza
NIM: 2407540
Kelas: PSTI 2B
Dosen Pengampu : Dr. Suprih Widodo, S.Si.,M.T
Mata Kuliah : Matematika Diskrit

## Isi pada program
Program ini dibuat untuk menghitung jumlah kemungkinan pemilihan kelompok dari sejumlah mahasiswa menggunakan konsep kombinasi dalam materi kombinatorial matematika diskrit. Implementasi ini dibuat sebagai bagian dari Tugas Besar Matematika Diskrit.

## Tujuan Program
Menghitung banyaknya cara memilih anggota(r) dari total mahasiswa(n) tanpa memperhatikan urutan, menggunakan rumus: C(n, r) = n! / (r!(n - r)!) yang telah saya pahami dan presentasikan tetapi program yang saya buat tidak menghitung faktorial secara langsung ini karena saya menghindari terjadinya overflow pada outputnya yang menjadikan kerja programnya juga semakin lambat, melainkan menggunakan metode iteratif yaitu secara tahap demi tahap menggunakan looping.

## Konsep yang Digunakan
- kombinasi dalam kombinatorika
- simetri atau persamaan dua sisi pada kombinasi: C(n, r) = C(n, n - r)
- loop iteratif untuk perhitungan bertahap
- validasi input (r tidak boleh lebih besar dari n)

## 📄 Struktur Program
1. Fungsi hitungKombinasi(n, r) : menghitung nilai kombinasi menggunakan loop:
   long long hitungKombinasi(int n, int r) {
    if (r > n - r) r = n - r;
    long long hasil = 1;
    for (int i = 1; i <= r; i++) {
        hasil = hasil * (n - i + 1) / i;
    }
    return hasil;
}

2. Fungsi main(): menerima input user dan menampilkan hasil kombinasi:
   int main() {
   int jumlahMahasiswa, jumlahPerKelompok;

## Video Demo : 
