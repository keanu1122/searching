#include <iostream>
using namespace std;

int main() {
    int suhu[] = {-3, 5, 0, -12, 8, 15, -1, 22};
    int n = sizeof(suhu) / sizeof(suhu[0]);
    int positif[8], c = 0;
    bool adaNol = false;

    for (int i = 0; i < n; i++) {
        if (suhu[i] == 0) adaNol = true;
        if (suhu[i] > 0) positif[c++] = suhu[i];
    }

    cout << "Nilai 0 ditemukan: " << (adaNol ? "Ya" : "Tidak") << "\n";
    cout << "Suhu positif (> 0): ";
    for (int i = 0; i < c; i++) cout << positif[i] << " ";
    cout << endl;

    return 0;
}