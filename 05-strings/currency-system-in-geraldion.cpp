#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int j = 0; j < n; j++)
	{
		if (arr[j] == 1) {
		       cout << "-1" << endl;	
		       return (0);
		}
	}
	cout << "1" << endl;
}
