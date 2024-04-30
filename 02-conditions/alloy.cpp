// https://atcoder.jp/contests/abc212/tasks/abc212_a?lang=en
#include <iostream>
using namespace std;

int main(void) {
	int a, b;
	cin >> a >> b;

	if (a > 0 && b == 0)
		cout << "Gold";
	else if (a == 0 && b > 0)
		cout << "Silver";
	else
		cout << "Alloy";
	return (0);
}
