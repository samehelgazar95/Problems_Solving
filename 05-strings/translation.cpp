#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	string t, s;
	cin >> t >> s;

	reverse(s.begin(), s.end());

	if (t == s)
		cout << "YES";
	else
		cout << "NO";
}
