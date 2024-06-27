#include <iostream>
using namespace std;

int main (void)
{
	int n, res = 0;
	cin >> n;	

	int arr[n] = {0};
	for (int i = 1; i < n; i++)
		cin >> arr[i];

	int a, b;
	cin >> a >> b;

	for (int i = a; i < b; i++)
		res += arr[i];

	cout << res;

	return (0);
}
