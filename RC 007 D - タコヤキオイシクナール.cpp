#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main(void) {
	int boxNum, changedNum;
	int count = 0;
	double max = 1, min = 1;
	cin >> boxNum >> changedNum;
	vector<pair<double, double> > boxs(boxNum, make_pair(1, 0));

	for (int i = 0; i < changedNum; i++) {
		double n, a, b;
		cin >> n >> a >> b;
		boxs[n-1] = make_pair(a, b);
		double tako = 1.0;
		for (int j = 0; j < boxNum; j++) {
			tako *= boxs[j].first;
			tako += boxs[j].second;
		}
		if (max < tako) {
			max = tako;
		} else if (min > tako) {
			min = tako;
		}
	}
	cout.precision(7);
	cout << min << endl;
	cout << max << endl;

	return 0;
}