// https://atcoder.jp/contests/abc049/tasks/abc049_a?lang=en
#include <iostream>
using namespace std;

int main(void) {
	char c;
	cin >> c;

	char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
	for (int i = 0; i <= 4; i++)
	{
		if (c == vowels[i])
		{
			cout << "vowel";
			return (0);
		}
	}
	cout << "consonant";
	return (0);
}
