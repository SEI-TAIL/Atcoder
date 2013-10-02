#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main(void) {
	int nameNum, alphaNum, count = 0;
	string name, alpha;
	cin >> nameNum >> alphaNum;
	cin >> name;
	cin >> alpha;
	map<char, int> bag;
	for (int k = 0; k < alphaNum; k++) {
		bag[alpha[k]]++;
	}
	for (int i = 0; i < nameNum; i++) {
		if (bag[name[i]] == 0) {
			cout << "-1" << endl;
			return 0;
		}
	}
	count++;
	for (int i = 0; i < nameNum; i++) {
		bag[name[i]]--;
		if (bag[name[i]] == -1) {
			for (int k = 0; k < alphaNum; k++) {
				bag[alpha[k]]++;
			}
			count++;
		}
	}
	cout << count << endl;
	return 0;
}