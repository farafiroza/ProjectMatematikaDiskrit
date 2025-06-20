// Nama: Fara Firoza
// NIM: 2407540
// Kelas: 2B PSTI
// Dosen Pengampu: Dr. Suprih Widodo, S.Si., M.T

#include <stdio.h>

//fungsi C(n,r) = n!/ (r!(n-r)!) 
long long hitungKombinasi(int n, int r) {

// manfaatkan sifat kombinasi sama kedua sisi atau simetris C(n,r)=C(n,n−r)
if (r > n - r) r = n - r;
    
// proses penghitungan kombinasi secara bertahap
long long hasil = 1;
    for (int i = 1; i <= r; i++) {
        hasil = hasil * (n - i + 1) / i;
    }
    return hasil;
}

// meminta input dari user
int main() {
    int jumlahMahasiswa, jumlahPerKelompok;

    printf("masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);

    printf("masukkan jumlah mahasiswa per kelompok: ");
    scanf("%d", &jumlahPerKelompok);

// memvalidasi input tidak melebihi dari input jumlah mahasiswa
    if (jumlahPerKelompok > jumlahMahasiswa) {
        printf("invalid, jumlah per kelompok tidak bisa lebih dari jumlah mahasiswa!\n");
    } else {
        long long jumlahKemungkinan = hitungKombinasi(jumlahMahasiswa, jumlahPerKelompok);
        printf("banyak kemungkinan pemilihan %d orang dari %d mahasiswa: %lld\n", jumlahPerKelompok, jumlahMahasiswa, jumlahKemungkinan);
    }

    return 0;
}
