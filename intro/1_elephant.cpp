// https://vjudge.net/problem/CodeForces-617A
#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
        double x;
        cin >> x;

	if (x <= 5)
		cout << 1;
	else
	{
		cout << ceil(x / 5);
	}
}
