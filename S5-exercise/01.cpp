
#include <iostream>
using namespace std;

void f(int x) {
    x = x + 5;
}

int main() {
    int a = 10;
    f(a);
    cout << a;
    return 0;
}
