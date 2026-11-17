#include <iostream>
#include <string>
using namespace std;

int main() {
    string produk[] = {"Laptop", "Mouse", "Keyboard", "Monitor", "Headset"};
    int n = sizeof(produk) / sizeof(produk[0]);
    string panjang[5];
    int c = 0;
    bool adaKb = false;

    for (int i = 0; i < n; i++) {
        if (produk[i] == "Keyboard") adaKb = true;
        if (produk[i].length() > 5) panjang[c++] = produk[i];
    }

    cout << "Produk Keyboard ditemukan: " << (adaKb ? "Ya" : "Tidak") << "\n";
    cout << "Produk (> 5 karakter): ";
    for (int i = 0; i < c; i++) cout << panjang[i] << " ";
    cout << endl;

    return 0;
}