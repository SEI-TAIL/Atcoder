#include <iostream>

using namespace std;

int main(void) {
	int num = 0;
	int cost = 0;
	cin >> num;
	cost += (num/10)*100;
	num -= (num/10)*10;
	if ((num%10)/7 > 0) {
		cost += 100;
		num -= num;
	}
	cost += num*15;
	cout << cost;
	return 0;
}