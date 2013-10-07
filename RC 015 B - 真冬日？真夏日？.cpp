#include <iostream>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	int mousyo = 0;
	int manatu = 0;
	int natu = 0;
	int nettai = 0;
	int huyu = 0;
	int mahuyu = 0;
	for (int i = 0; i < n; i++) {
		double max, min;
		cin >> max >> min;
		if (max >= 35) {
			mousyo++;
		} else if (max >= 30) {
			manatu++;
		} else if (max >= 25) {
			natu++;
		}
		if (min >= 25) {
			nettai++;
		}
		if (max >= 0 && min < 0) {
			huyu++;
		}
		if (max < 0) {
			mahuyu++;
		}
	}
	cout << mousyo << " " << manatu << " " << natu << " " << nettai << " " << huyu << " " << mahuyu << endl;
	return 0;
}