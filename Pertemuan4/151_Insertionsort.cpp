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

void insertionsort() {													// Prosedure insetionsort

	int temp;															// Membuatt variable data temporer atau penyimpanan semetara
	int i, j;															// Membuat variable j sebagai penanda

	for (i = 1; i <= n - 1; i++) {										// 1. Looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i];													// 2. Simpan nilai arr[i] ke variable sementara temp

		j = i - 1;														// 3. Setting nilai j sama dengan i-1

		while (j >= 0 && arr[j] > temp)									// 4. Looping while dimana nilai j lebih besar sama dengan 0 dan arr[j] lebih besar daripada temp
			// arr[j] lebih besar dari pada temp
		{
			arr[j + 1] = arr[j];										// 4a. Simpan arr[j] ke dalam variable arr[j+1]
			j--;														// 4b. Decrement nilai j by 1
		}
		arr[j + 1] = temp;												// 5. Simpan nilai temp ke dalam arr[j+1]

		cout << "\nPass " << i << ": ";									// Outpu ke layar
		for (int k = 0; k < n; k++) {									// Looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";										// Output ke layar
		}
	}
}

	void display() {														// Procedire Display

		cout << endl;														// Output ke layar
		cout << "/n=================================" << endl;				// Output ke layar
		cout << "Element Array yang telah tersusun" << endl;				// Output ke layar
		cout << "=================================" << endl;				// Output ke layar

		for (int j = 0; j < n; j++) {										// Looping dengan j dimullai dari 0 hingga n-1
			cout << arr[j] << endl;											// Output ke layar
		}
		cout << endl;														// Output baris kosong

	}

	int main()
	{
		input();															// Memanggil input
		insertionsort();													// memanggil insertionsort
		display();															// Memanggil display
	}
