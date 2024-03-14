#include <iostream>
using namespace std;

int arr[20];															// Membuat Array dengan panjang data 20
int n;																	// Membuat Variabel inputan n

void input() {															// Procedure Input
	while (true)
	{
		cout << "Masukkan Jumlah Data pada Array : ";					//Membuat Input jumlah element Array
		cin >> n;														//Memanggil variabel input n

		if (n <= 20) {													// Membuat Kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArrayyang anda masukkan maksimal 20 Elemen.\n";	// Menampilkan Pesan jika data lebih dari 20
		}
	}
	cout << endl;														// Membuat jarak per baris program
	cout << "======================" << endl;							// Membuat tampiilan susunan data element array
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;


	for (int i = 0; i < n; i++)											// Menggunakan perulangan for untuk menyimpan data pada Array
	{
		cout << "Data ke-" << (i + 1) << ": ";							// Masukkan atau menginputkan nilai data n
		cin >> arr[i];													// Menyimpan nilai data n kedalam array arr
	}
}
