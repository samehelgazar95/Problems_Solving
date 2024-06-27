#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	
	int scores[n];
	for (int i = 0; i < n; i++)
		cin >> scores[i];

	int amazing = 0;
	int min = scores[0];
	int max = scores[0];
	for (int i = 1; i < n; i++) {
		if (scores[i] > max) {
			amazing++;
			max = scores[i];
		} else if (scores[i] < min) {
			amazing++;
			min = scores[i];
		}
	}

	cout << amazing << endl;
}
