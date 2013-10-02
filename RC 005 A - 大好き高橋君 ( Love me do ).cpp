#include <iostream>
#include <string>
     
using namespace std;
     
int main(void) {
	int n, answer = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;
		if (i == n-1) {
			word.erase(word.end()-1);
		}
		if (word == "Takahashikun" || word == "takahashikun" || word == "TAKAHASHIKUN") {
			answer++;
		}
	}
	cout << answer << endl;
	return 0;
}