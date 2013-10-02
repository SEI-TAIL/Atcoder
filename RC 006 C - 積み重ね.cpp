#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int n;
	vector<int> Danballs;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		Danballs.push_back(tmp);
	}

	vector<int> tumi(Danballs.size(), -1);
	for (int i = 0; i < n; i++) {
		bool isTumi = false;
		for (int j = 0; j < tumi.size(); j++) {
			if (tumi[j] == -1 || tumi[j] >= Danballs[i]) {
				isTumi = true;
				tumi[j] = Danballs[i];
				break;
			}
		}
	}
	int i;
	for (i = 0; i < n; i++) {
		if (tumi[i] == -1) {
			break;
		}
	}
	cout << i << endl;
	return 0;
}