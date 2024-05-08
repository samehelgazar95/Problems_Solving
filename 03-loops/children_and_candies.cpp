#include <iostream>
using namespace std;


int main(void) {
	int n;
	int candies = 0;
	cin >> n;

	while (n) {
		candies += n;
		n--;	
	}

	cout << candies;
	return (0);
}
