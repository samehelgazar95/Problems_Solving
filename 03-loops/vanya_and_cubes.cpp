#include <iostream>
using namespace std;

int main(void)
{
	int n, level = 0, cubes = 1;
	cin >> n;

	while (n >= cubes)
	{
		level++;

		n -= cubes;  // 24
		cubes = level + 1 + cubes;	 // 3	
	}
	cout << level;
	return (0);
}
