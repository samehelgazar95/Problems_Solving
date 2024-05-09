#include <iostream>
using namespace std;

int main (void)
{
	int test_cases;
	cin >> test_cases;

	while (test_cases)
	{
		int days;
		cin >> days;
		int prices[days] = {0}, res = 0;

		for (int i = 0; i < days; i++)
			cin >> prices[i];

		for (int i = 0; i < days; i++)
		{
			for (int j = (i + 1); j < days; j++)
			{
				if (prices[i] > prices[j])
				{
					res++;
					break;
				}
			}
		}
	
		cout << res << endl;
		test_cases--;
	}

	return (0);
}
