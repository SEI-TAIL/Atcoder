#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	int n, l;
	vector<string> amida;
	string goal;

	cin >> n >> l;
	string waste;
	getline(cin, waste);
	for (int i = 0; i < l; i++) {
		string line;
		getline(cin, line);
		amida.push_back(line);
	}

	getline(cin, goal);
	int goalNum = 0;
	for (int i = 0; i < goal.size(); i++) {
		if (goal[i] == 'o') {
			break;
		}
		goalNum++;
	}

	int nowRoot = goalNum;
	for (int i = l-1; i >= 0; i--) {
		if (nowRoot-1 >= 0 && amida[i][nowRoot-1] == '-') {
			nowRoot -= 2;
		} else if (nowRoot+1 < n*2-1 && amida[i][nowRoot+1] == '-') {
			nowRoot += 2;
		}
	}
	cout << nowRoot/2+1 << endl;
	return 0;
}