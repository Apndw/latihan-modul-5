#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int i, data[5];

  for (i = 0; i < 5; i++) {
    cout <<"Masukan bilangan bulat: ";
    cin >> data[i];
  }

  cout << "Bilangan yang ganjil adalah" << endl;

  for (i = 0; i < 5; i++) {
    if (data[i] % 2 == 1) {
      cout << data[i] << endl;
    }
  }

  return 0;
}