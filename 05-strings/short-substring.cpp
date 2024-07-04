#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int t;
	cin >> t;

	string words[t];
	for (int i = 0; i < t; i++)
		cin >> words[i];

	for (int i = 0; i < t; i++) {
		int wordSize = words[i].size();
		char *temp = new char[wordSize]; 

		temp[0] = words[i][0];
		int j = 1, k = 1;
		for (; j < wordSize - 1; j += 2, k++)
			temp[k] = words[i][j];

		temp[k] = words[i][wordSize - 1];
		temp[++k] = '\0';
		cout << temp << endl;
		delete[] temp;
	}
}
