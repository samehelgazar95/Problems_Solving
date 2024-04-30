// https://codeforces.com/problemset/problem/1/A
#include <iostream>
using namespace std;

int main(void) {
	int n, m, a;
	long long width, height;

	cin >> n >> m >> a;

	width = (n + a - 1) / a;
	height = (m + a - 1) / a;

	cout << width * height;

	return (0);
}
