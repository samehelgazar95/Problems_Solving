#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
	for (int idx = 0; idx < n; idx++)
                cout << arr[idx] << ' ';
        cout << endl;
}

int main(void) {
	int n;
	cin >> n;
	int arr[n];

	for (int k = 0; k < n; k++) {
		cin >> arr[k];
	}

	for (int j = n - 1; j >= 0; j--) {
		for (int i = 0; i < j; i++) {
			if (arr[i] > arr[j]) {
				int diff = arr[i] - arr[j];
				arr[i] -= diff;
				arr[j] += diff;
			}
		}
	}
		printArray(arr, n);
}
