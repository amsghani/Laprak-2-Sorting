#include <iostream>
using namespace std;

// Fungsi untuk menukar dua elemen menggunakan pointer
void tukar(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int n;                 // Menyimpan jumlah elemen
    int arr[1005];         // Array dengan kapasitas maksimal 1005 elemen

    // Input jumlah elemen array
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    // Input elemen-elemen array
    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Proses Bubble Sort
    for (int i = 0; i < n - 1; i++) {           
        for (int j = 0; j < n - i - 1; j++) {  
            if (arr[j] > arr[j + 1]) {         
                tukar(&arr[j], &arr[j + 1]);   
            }
        }
    }

    // Output array setelah diurutkan
    cout << "Array setelah diurutkan (Bubble Sort): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
