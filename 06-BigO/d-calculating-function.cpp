#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    // Must be O(1)


    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sum += i;
        else if (i % 2 != 0)
            sum -= i;
    }

    cout << sum << endl;
}
