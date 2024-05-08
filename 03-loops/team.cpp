#include <iostream>
using namespace std;


int main(void) {
	int n, i, yes_no, yes = 0, counter = 0;

	cin >> n;

	while (n) {
		for (i = 0; i < 3; i++)
		{
			cin >> yes_no;
			if (yes_no == 1)
				yes++;
		}
		if (yes >= 2)
			counter++;

		n--;
		yes = 0;
	}

	cout << counter;
	return (0);
}
