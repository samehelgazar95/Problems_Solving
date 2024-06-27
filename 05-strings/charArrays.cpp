#include <iostream>
#include <cstring>
using namespace std;

int main(void){
	// Stack Allocation: 
	// 	will be allocated in the stack and will be deallocate dynamicaly when 
	// 	the function returns, if you want it to not deallocate then use static
	//
	// Static Stack Allocation: same as stack allocation but makes the array lives
	//  forever even the functions returns
//	char str1[10] = "Hello"; 
//	static char static_str[25] = "To infinity and beyond";

	// Dynamic Allocation: Memory allocation on heap using new or malloc keywords
	// and it doesnot have a specific size and we must deallocate it manually
	// using free of delete keywords
//	char* str2 = new char(10);
//	for (int i = 0; i <= strlen(str2); i++)
//	{
//		str2[i] = str1[i];
//	}
	
//	cout << str1 << endl << static_str << endl << str2 << endl;
//	free(str2);

	// String as input: cin will stop when receive Space or Enter,
	// so use cin.getline instead
//	char str3[20];
//	cin.getline(str3, 20);
//	cout << str3 << endl;

//	char *str4 = new char(20);
//	char str5[20];
//	strcpy(str4, str3);
//	strcpy(str5, str3);

//	cout << str4 << endl << str5 << endl;

	char cmp1[10] = "Hey";
//	char cmp2[10] = "Hey";
	char cmp3[10] = "He";
	char cmp4[10] = "Heyy";

//	int equal = strcmp(cmp1, cmp2); // 0
//	int min = strcmp(cmp3, cmp1); // -121
//	int max = strcmp(cmp4, cmp1); // 121
//	cout << equal << endl << min << endl << max;

	char *strr = new char();

	strcat(strr, cmp1);
	cout << strr << endl;

	char *found_char = strchr(strr, 'e');
	if (found_char != nullptr)
		cout << "Found 'e'" << (found_char - strr);

}
