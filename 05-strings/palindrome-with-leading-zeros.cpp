#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string str) {
	string rev = str;
	reverse(rev.begin(), rev.end());

	if (rev == str)
		return true;

	return false;
}

int main(void) {
	int n;
	cin >> n;
	string str = "";
	string revStr = "";
	
	while (n > 0) {
		str += (n % 10) + '0';
		n /= 10;
	}
	revStr = str;
	reverse(str.begin(), str.end());
	if (isPalindrome(str)){
		cout << "Yes";
		return (0);
	}
	
	int countZeros = 0;
	for (char c : revStr) {
		if (c == '0')
			countZeros++;
		else
			break;
	}
	string subStr = revStr.substr(countZeros, revStr.size() - countZeros);
	if (isPalindrome(subStr)){
                cout << "Yes";
                return (0);
        }

	cout << "No";
	return (0);
}
