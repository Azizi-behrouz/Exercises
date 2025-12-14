#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int q = 0;
    int r = a;

    while (r >= b) {
        r -= b;
        q++;
    }

    cout << "Quotient = " << q << endl;
    cout << "Remainder = " << r << endl;
    return 0;
}
