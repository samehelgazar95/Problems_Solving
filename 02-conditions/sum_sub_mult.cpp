// https://atcoder.jp/contests/abc137/tasks/abc137_a?lang=en
#include <iostream>
using namespace std;


int main(void) {
	int a, b, sum, sub, mult;
	cin >> a >> b;

	sum = a + b;
	sub = a - b;
	mult = a * b;

	if (sum >= sub && sum >= mult)
		cout << sum;
	else if (sub >= sum && sub >= mult)
		cout << sub;
	else if (mult >= sum && mult >= sub)
		cout << mult;

	return (0);
}
