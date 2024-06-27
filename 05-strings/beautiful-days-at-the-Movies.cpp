#include <iostream>
#include <string>
using namespace std;

int reverseNumber(int num) {
        int rev = 0; 
        while (num > 0) { 
		rev = rev * 10 + num % 10;
		num /= 10;
	}
	return(rev);
}

int main(void) {
	int i, j, k;
	cin >> i >> j >> k;

	int counter = 0;
	for (; i <= j; i++) {
		int rev = reverseNumber(i);
		if (((i - rev) % k) == 0)
			counter++;
	}
	cout << counter << endl;
}
