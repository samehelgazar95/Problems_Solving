#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	string words[n];

	for (int i = 0; i < n; i++)
		cin >> words[i];

	for (int i = 0; i < n; i++) {
		int sz = words[i].size();
		if (sz > 10) {
			cout << words[i].front() << sz - 2 << words[i].back() << endl;
		} else {
			cout << words[i] << endl;
		}
	}
}
