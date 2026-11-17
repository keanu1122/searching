#include <iostream>
using namespace std;

int main() {
	int nilai[] = {60, 85, 40, 90, 75, 50, 95};
	int n = sizeof(nilai) / sizeof(nilai[0]);
	int lulus[7], c = 0, idx = -1;

	for (int i = 0; i < n; i++) {
		if (nilai[i] == 85) idx = i;
		if (nilai[i] >= 75) lulus[c++] = nilai[i];
	}

	if (idx != -1) cout << "Nilai 85 ditemukan di index ke-" << idx << "\n";
	else cout << "Nilai 85 tidak ditemukan\n";

	cout << "Daftar nilai lulus: ";
	for (int i = 0; i < c; i++) cout << lulus[i] << " ";
	cout << endl;

	return 0;
}