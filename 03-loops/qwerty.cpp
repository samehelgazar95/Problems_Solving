#include <iostream>
using namespace std;

int main(void)
{
	int sequence[25] = {0};
	int i = 0, a = 97;
	
	for (; i < 26; i++)
	{
		cin >> sequence[i];
	}
	
	i = 0;
	for (; i < 26; i++) 
	{
		cout << char(a + sequence[i] - 1);
	}
	
	return (0);
}
