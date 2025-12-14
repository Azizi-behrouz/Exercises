#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (double x = 0; x < 2; x += 0.2)
        cout << cos(x)*cos(x) + sin(x)*sin(x) << endl;
    return 0;
}
