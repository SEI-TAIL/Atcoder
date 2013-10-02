#include <iostream>

using namespace std;

int main(void) {
	int ticket[6];
	int bonus;
	int tosen[6];
	int hit = 0;
	bool bonusHit = false;
	for (int i = 0; i < 6; i++) {
		cin >> tosen[i];
	}
	cin >> bonus;
	for (int i = 0; i < 6; i++) {
		cin >> ticket[i];
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (ticket[i] == tosen[j]) {
				hit++;
			}
		}
		if (ticket[i] == bonus) {
			bonusHit = true;
		}
	}
	switch (hit) {
	case 6:
		cout << "1" << endl;
		break;
	case 5:
		if (bonusHit == true) {
			cout << "2" << endl;
		} else {
			cout << "3" << endl;
		}
		break;
	case 4:
		cout << "4" << endl;
		break;
	case 3:
		cout << "5" << endl;
		break;
	default:
		cout << "0" << endl;
		break;
	}
	return 0;
}