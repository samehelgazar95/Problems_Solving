#include <iostream>
#include <climits>
using namespace std;

int main(void) {
	int n, k, x;
	cin >> n >> k >> x;

	int chores[n];
	for (int i = 0; i < n; i++)
		cin >> chores[i];

	for (int j = 0; j < k; j++) {
		int max = INT_MIN;
		int idx = 0;
		for (int i = 0; i < n; i++) {
			if (chores[i] > max) {
				max = chores[i];
				idx = i;
			}
		}

		chores[idx] = x;
	}

	int sum = 0;
	for (int index = 0; index < n; index++)
		sum += chores[index];

	cout << sum << endl;
}
