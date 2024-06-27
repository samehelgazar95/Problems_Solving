#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) 
{
	// string
//	string fullName;
//	string firstName = "sameh";
//	string lastName("elgazar", 8);
//	string repeatMe(5, 'm');
//	
//	fullName = firstName + ' ' + lastName;
//
//	cout << firstName << endl << lastName << endl << fullName << endl;
//	cout << repeatMe << endl;

//	string age;
//	cin >> age;
//	cout << age << endl;
//	cout << age.size() << endl;
//	cout << age.empty() << endl;
//	age.clear();
//	cout << age.empty() << endl;

//	cout << age.front() << endl;
//	cout << age.back() << endl;

//	string hello = "hello";
//	hello.push_back('w');
//	hello.pop_back();
//	hello += "world";

//	reverse(hello.begin(), hello.end());

//	cout << hello << endl;

//	string s1 = hello.substr(0, 5);
//	string s2 = hello.substr(0, 5);
//	cout << s1 << endl;
	
//	if (s1 == s2) {
//		cout << "equals" << endl;
//	}

	string hey = "Hey Dear World!";
//	hey.erase(4, 5);
//	cout << hey << endl;

//	hey.insert(3, " dear");
//	cout << hey << endl;

	hey.replace(9, 5, "Beloved");
	cout << hey << endl;

	string s = "Hello";
	int i = s.find("loo");
	cout << i << endl;



}
