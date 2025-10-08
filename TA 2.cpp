#include <iostream>
using namespace std;

void tukar(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int n;
    int nilai[1005];

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    cout << "Masukkan nilai mahasiswa: ";
    for (int i = 0; i < n; i++) {
        cin >> nilai[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int posisiMin = i;
        for (int j = i + 1; j < n; j++) {
            if (nilai[j] < nilai[posisiMin]) {
                posisiMin = j;
            }
        }
        if (posisiMin != i) {
            tukar(&nilai[i], &nilai[posisiMin]);
        }
    }

    cout << "Nilai mahasiswa setelah diurutkan (Selection Sort): ";
    for (int i = 0; i < n; i++) {
        cout << nilai[i] << " ";
    }
    cout << endl;

    return 0;
}
