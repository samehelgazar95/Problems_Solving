#include <iostream>
using namespace std;

int main(void)
{
	int n, i, l, r;
	cin >> n;
	int a[n] = {0};

	for (i = 0; i < n; i++)
		cin >> a[i];

	cin >> l >> r;
	
	while (l <= r)
	{
		cout << a[l-1] << ' ';
		l++;
	}
	return (0);
}
