#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main (void) {
    int x, y, z;
    cin >> x >> y >> z;

    swap(x, y);
    swap(x, z);
    
    cout << x << ' ' << y << ' ' << z << endl;
}
