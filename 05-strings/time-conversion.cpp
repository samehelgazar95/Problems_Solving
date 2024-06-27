#include <iostream>
#include <string>
using namespace std;


int main(void) {
	string time;
	cin >> time; // "07:05:45PM"
	
	int sz = time.size();
	string hms = time.substr(0, sz-2);
	string amPm = time.substr(8, sz);
	string hour = time.substr(0, 2);

	if (amPm == "AM") {
		if (hour == "12")
			hms.replace(0, 2, "00");

		cout << hms << endl;
	} else if (amPm == "PM") {
		if (hour != "12") {
			int hourNum = stoi(hour);
			hour = to_string(hourNum + 12);
			hms.replace(0, 2, hour);
		}
		cout << hms << endl;
	}
}
