#include <iostream>
using namespace std;


int main(void) {
	int n, k;

	cin >> n >> k;

	while (k) {
		if ((n % 10) == 0)
			n /= 10;
		else
			n -= 1;
		k--;
	}

	cout << n;
	return (0);
}
