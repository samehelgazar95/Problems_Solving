#include <iostream>
using namespace std;

int main(void)
{
	int x, i, j, moves = 0;
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cin >> x;
			if (x == 1)
			{
				if (i < 2)
					moves += 2 - i;
				else
					moves += i - 2;
			
				if (j < 2)
					moves += 2 - j;
				else
					moves += j - 2;
			}
		}	
	}

	cout << moves;
	return (0);
}
