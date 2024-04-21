// https://vjudge.net/problem/CodeForces-996A
#include <iostream>
using namespace std;

int main(void) {
	// 100 20 10 5 1 
	long long n;
	int counter = 0;
	cin >>  n;
	while (n) {
		if (n >= 100)
		{
			n -= 100;
			counter++;
		} else if (n < 100 && n >= 20) {
			n -= 20;
			counter++;
		} else if (n < 20 && n >= 10) {
			n -= 10;
			counter++;
		} else if (n < 10 && n >= 5) {
			n -= 5;
			counter++;
		} else if (n < 5) {
			n -= 1;
			counter++;
		}
	}
	cout << counter;
}

