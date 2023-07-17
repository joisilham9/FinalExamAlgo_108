#include <iostream>
#include <string>
using namespace std;

class mahasiwa
{
public:
	int NIM;
    string nama;
    string jurusan;
    int tahunMasuk;
};


const int MAX_MAHASISWA = 100 ;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;

//isi disini

void tambahMahasiswa();
{
    if (jumlahMahasiswa < MAX_MAHASISWA)
    {
        cout << "========== TAMBAH MAHASISWA ==========" << endl;
        cout << "NIM : ";
        cin >> NIM[jumlahMahasiswa];
        cin.ignore();
        cout << "Nama : ";
        getline(cin, nama[jumlahMahasiswa]);
        cout << "Jurusan : ";
        getline(cin, jurusan[jumlahMahasiswa]);
        cout << "Tahun Masuk: ";
        cin >> tahunMasuk[jumlahMahasiswa];
        cin.ignore();
        jumlahMahasiswa++;
        cout << "Mahasiswa berhasil ditambahkan!" << endl;
    }
    else {
        cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
    }

};

//isi disini
void tampilkanSemuaMahasiswa();

if (tampilkanSemuaMahasiwa < MAX_MAHASISWA)
{
    cout << "============ Tampilkan Mahasiswa ============" << endl;
    cout << "NIM : ";
    cin >> NIM[jumlahMahasiswa];
    cin.ignore();
    cout << "Nama : ";
    getline(cin, nama[jumlahMahasiswa]);
    cout << "Jurusan : ";
    getline(cin, jurusan[jumlahMahasiswa]);
    cout << "Tahun Masuk: ";
    cin >> tahunMasuk[jumlahMahasiswa];
    cin.iqnore();
    jumlahMahasiswa;
    cout << "data : " << endl;
}
else {
    cout << "mahasiswa berhasil ditampilakn." << endl;
};




void algorithmacariMahasiswaByNIM();
 
   
void algorithmaSortByTahunMasuk();

int main() {

	int pilihan;
	do {
        cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
        cout << "1. Tambah Mahasiswa" << endl;
        cout << "2. Tampilkan Semua Mahasiswa" << endl;
        cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
        cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();
        switch (pilihan) {
        case 1:
            tambahMahasiswa();
            break;
        case 2:
            tampilkanSemuaMahasiswa();
            break;
        case 3:
            cariMahasiswaByNIM();
            break;
        case 4:
            sortByTahunMasuk();
            break;
        case 5:
            cout << "Terima kasih! Program selesai." << endl;
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
        cout << endl;
    } while (pilihan != 5);

    return 0;
}


//2.
// 3. Stack: Elemen yang dapat diakses hanya elemen teratas (top) stack.
//Queue: Elemen yang dapat diakses adalah elemen yang berada di depan(front) dan belakang(rear) queue.
// 4 .Stack: Elemen yang dapat diakses hanya elemen teratas (top) stack.
// 5.a 50
//   b.


