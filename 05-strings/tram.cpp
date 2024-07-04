#include <iostream>
using namespace std;

int main(void) {
	int t;
	cin >> t;

	int inOut[t][2]; 
	for (int i = 0; i < t; i++) {
		cin >> inOut[i][0];
		cin >> inOut[i][1];
	}

	int maxCapacity = 0;
	int prevCapacity = 0;
	for (int i = 0; i < t; i++) {
		int currentCapacity = prevCapacity - inOut[i][0] + inOut[i][1];
		prevCapacity = currentCapacity;
		
		if (currentCapacity > maxCapacity)
			maxCapacity = currentCapacity;
	}

	cout << maxCapacity << endl;
}
