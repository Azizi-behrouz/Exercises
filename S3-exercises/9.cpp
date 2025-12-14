#include <iostream>
using namespace std;

int main() {
    int p1, p2;
    cin >> p1 >> p2;

    if (p1 == p2)
        cout << "Draw";
    else if ((p1 == 0 && p2 == 2) ||
             (p1 == 1 && p2 == 0) ||
             (p1 == 2 && p2 == 1))
        cout << "Player 1 wins";
    else
        cout << "Player 2 wins";

    return 0;
}
