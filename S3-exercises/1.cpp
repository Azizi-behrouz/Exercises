#include <iostream>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    if (n % d == 0)
        cout << n << " is divisible by " << d << endl;

    return 0;
}
