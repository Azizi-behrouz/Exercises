#include <iostream>
using namespace std;

int main() {
    int n, i = 0;
    cin >> n;

    while ((i + 1) * (i + 1) <= n)
        i++;

    cout << i;
    return 0;
}
