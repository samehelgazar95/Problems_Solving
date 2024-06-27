#include <iostream>
using namespace std;

int main(void)
{
	int n, k, next = 0;
	cin >> n >> k;

	int a[n] = {0};
	int i;

	for (i = 0; i < n; i++)
		cin >> a[i];

	for (i = 0; i < n; i++)
	{
		if (a[i] >= k+1)
			next++;
	}

	cout << next;

	return (0);
}
