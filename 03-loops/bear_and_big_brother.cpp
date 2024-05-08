#include <iostream>
using namespace std;


int main(void) {
	int a, b, years = 0;
	cin >> a >> b;

	while (b >= a) {
		b *= 2; 
		a *= 3; 
		years++;
	}

	cout << years;
	return (0);
}
