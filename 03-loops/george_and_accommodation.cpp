#include <iostream>
using namespace std;

int main(void)
{
	int n, p, q, available_rooms = 0;
	cin >> n;

	while (n)
	{
		cin >> p >> q;

		if ((q - p ) >= 2)
			available_rooms++;
		n--;
	}

	cout << available_rooms;

	return (0);
}
