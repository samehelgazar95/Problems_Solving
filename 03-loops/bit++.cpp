#include <iostream>
using namespace std;


int main(void)
{
	int i, j, plus = 0, minus = 0, x = 0;
	char curr;

	cin >> i;

	while (i > 0)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> curr;
			if (curr == '+')
				plus++;
			else if (curr == '-')
				minus++;
		}

		if (plus == 2)
		{
			x++;
			plus = 0;
		} else if (minus == 2)
		{
			x--;
			minus = 0;
		}
		
		i--;
	}

	cout << x;
	return (0);
}
