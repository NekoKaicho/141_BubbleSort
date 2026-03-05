#include <iostream>
#include<string>
using namespace std;

int arr[20];  //Deklarasi variabel global array a dengan ukuran 20 
int n:;  //Deklarasi variabel global n untuk menyimpan banyaknya elemen

void input() {  // Prosedur untuk input
    while (true) {
        cout << "Masukkan banyaknya elemen pada array :"; // Output ke layar
        cin >> n; // input dari pengguna
        if (n <= 20)  // Jika n kurang atau sama dengan 20
            break; // Keluar dari loop
        else { // Jika n lebih dari 20}
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout ,, "======================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++) {               // Looping dengan 1 dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": ";  // Output ke layar
        cin >> arr[i];                          // Input dari pengguna
    
    }
}


