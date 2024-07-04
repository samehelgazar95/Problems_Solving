#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    // Must be O(logn) not O(n)

    // 5^4 = 5*5*5*5 = 25*25 = 
    // 5^8 = 5*5*5*5*5*5*5*5 = 25*25*25*25 = 625*625

    /*
    8 >> 5 * 5 >> 
    */

    int num = 5;
    while (n > 1) {     // 6        4           2
        num  *= num;    // 5*5=25   25*25=625   
        n--;         // 4        2               
    }

    cout << (num % 100) << endl;
}
