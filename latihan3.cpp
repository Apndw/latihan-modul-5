#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int i, bilangan, daftar[5] = {1, 2, 3, 4, 5};

  cout << "Masukan bilangan yang akan dicari: ";
  cin >> bilangan;

  for (i = 0; i < 5; i++) {
    if (daftar[i] == bilangan) {
      cout << "Bilangan " << bilangan << " ditemukan" << endl;
      return 0;
    }
  }

  cout << "Bilangan " << bilangan << " tidak ditemukan" << endl;

  return 0;
}