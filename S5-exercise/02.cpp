#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (double x = 0; x < 2; x += 0.2)
        cout << cos(2*x) << " " << 2*cos(x)*cos(x)-1 << endl;
    return 0;
}
