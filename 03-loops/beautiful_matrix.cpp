#include <iostream>
using namespace std;

int main(void)
{
	int matrix[5][5], i, j, moves = 0;
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			cin >> matrix[i][j];
	}


	for (i = 0; i < 5; i++)
        {
                for (j = 0; j < 5; j++)
                {
			if (matrix[i][j] == 1)
			{
				if (i < 2)
				{
					matrix[i][j] = 0;
					matrix[i+1][j] = 1;
					moves++;
				} else if (i > 2)
				{
					matrix[i][j] = 0;
					matrix[i-1][j] = 1;
					moves++;
				} else if (j < 2)
				{
					matrix[i][j] = 0;
					matrix[i][j+1] = 1;
					moves++;
				} else if (j > 2)
				{
					matrix[i][j] = 0;
					matrix[i][j-1] = 1;
					moves++;
				}
			}
		}
	}
	cout << moves;
	return (0);
}
