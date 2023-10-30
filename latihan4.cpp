#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int x, y, penjumlahan, pengurangan;

  int data[3][3] = {
    {3, 4, 5},
    {6, 7, 8},
    {9, 10, 11}
  };

  int data2[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  for (x = 0; x < 3; x++) {
    penjumlahan = 0;
    pengurangan = 0;

    for (y = 0; y < 3; y++) {
      penjumlahan += data[x][y] + data2[x][y];
      pengurangan += data[x][y] - data2[x][y];
    }

    cout << "Penjumlahan baris ke-" << x + 1 << ": " << penjumlahan << endl;
    cout << "Pengurangan baris ke-" << x + 1 << ": " << pengurangan << endl;
    cout << endl;
  }

  return 0;
}