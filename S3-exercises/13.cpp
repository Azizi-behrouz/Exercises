#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    sum += n % 10;
    sum += (n / 10) % 10;
    sum += (n / 100) % 10;
    sum += (n / 1000) % 10;
    sum += (n / 10000) % 10;
    sum += (n / 100000) % 10;

    cout << "Sum = " << sum;
    return 0;
}
