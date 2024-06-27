#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int n;
	string word;
	cin >> n;
	cin >> word;

	int beg = 65, end = 90;
	bool flag = false;
	for (int i = beg; i <= end; i++)
	{
		for (int j = 0; j < n; j++) {
			int ascii = int(toupper(word[j]));
			if (i == ascii) {
				flag = true;
				break;
			}

			if (i != ascii && j == (n - 1))
				flag = false;
		}
		if (flag == false)
			break;
	}

	if (flag == false)
		cout << "NO" << endl;
	else	
		cout << "YES" << endl;
}
