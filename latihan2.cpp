#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int i, max, min, total, pilihan, data[10];

  while (true) {
    cout << "\tMENU" << endl;
    cout << endl;
    cout << "1. Input Array" << endl;
    cout << "2. Tampilkan Array" << endl;
    cout << "3. Cari Nilai Maksimum" << endl;
    cout << "4. Cari Nilai Minimum" << endl;
    cout << "5. Hitung Rata-rata" << endl;

    cout << "Masukan Pilihan : ";
    cin >> pilihan;

    switch (pilihan) {
      case 1:
        for (i = 0; i < 10; i++) {
          cout << "Masukan bilangan bulat: ";
          cin >> data[i];
        }
        break;
      case 2:
        for (i = 0; i < 10; i++) {
          cout << data[i] << endl;
        }
        break;
      case 3:
        max = data[0];

        for (i = 0; i < 10; i++) {
          if (data[i] > max) {
            max = data[i];
          }
        }

        cout << "Nilai Maksimum: " << max << endl;
        break;
      case 4:
        min = data[0];

        for (i = 0; i < 10; i++) {
          if (data[i] < min) {
            min = data[i];
          }
        }

        cout << "Nilai Minimum: " << min << endl;
        break;
      case 5:
        total = 0;

        for (i = 0; i < 10; i++) {
          total += data[i];
        }

        cout << "Nilai Rata-rata: " << total / 10 << endl;
        break;
      default:
        break;
    }
  }

  return 0;
}