#include <iostream>
#include <cmath>
using namespace std;

int main() {

    /********** تمرین 1 **********
     چاپ فقط وقتی n بر d بخش‌پذیر است
    *****************************/
    /*
    int n, d;
    cin >> n >> d;
    if (n % d == 0)
        cout << n << " is divisible by " << d << endl;
    */


    /********** تمرین 2 **********
     کمینه‌ی چهار عدد صحیح
    *****************************/
    /*
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    cout << "Minimum = " << min << endl;
    */


    /********** تمرین 3 **********
     عدد وسط (میانه) سه عدد
    *****************************/
    /*
    int a, b, c;
    cin >> a >> b >> c;
    if ((a >= b && a <= c) || (a >= c && a <= b))
        cout << a;
    else if ((b >= a && b <= c) || (b >= c && b <= a))
        cout << b;
    else
        cout << c;
    */


    /********** تمرین 4 **********
     مرتب‌سازی دو عدد بدون بلوک {}
    *****************************/
    /*
    int x, y;
    cin >> x >> y;
    if (x > y) swap(x, y);
    cout << x << " <= " << y << endl;
    */


    /********** تمرین 5 **********
     تعیین نمره بدون Goodbye
    *****************************/
    /*
    int score;
    cin >> score;
    switch (score / 10) {
        case 10:
        case 9: cout << "A"; break;
        case 8: cout << "B"; break;
        case 7: cout << "C"; break;
        case 6: cout << "D"; break;
        default: cout << "F";
    }
    */


    /********** تمرین 6 **********
     تشخیص سن (اصلاح‌شده)
     <18  -> child
     18-65 -> adult
     >=65 -> senior citizen
    *****************************/
    /*
    int age;
    cin >> age;
    if (age < 18)
        cout << "You are a child";
    else if (age >= 18 && age < 65)
        cout << "You are an adult";
    else
        cout << "You are a senior citizen";
    */


    /********** تمرین 7 **********
     بررسی مضرب بودن
    *****************************/
    /*
    int a, b;
    cin >> a >> b;
    if (a % b == 0 || b % a == 0)
        cout << "multiple";
    else
        cout << "not";
    */


    /********** تمرین 8 **********
     ماشین حساب ساده با switch
    *****************************/
    /*
    int a, b;
    char op;
    cin >> a >> op >> b;
    switch (op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << a / b; break;
        case '%': cout << a % b; break;
        default: cout << "Invalid operator";
    }
    */


    /********** تمرین 9 **********
     سنگ - کاغذ - قیچی (if)
     0: سنگ | 1: کاغذ | 2: قیچی
    *****************************/
    /*
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
    */


    /********** تمرین 10 **********
     سنگ - کاغذ - قیچی با switch
    *****************************/
    /*
    int p1, p2;
    cin >> p1 >> p2;
    switch (p1 * 10 + p2) {
        case 2:
        case 10:
        case 21: cout << "Player 1 wins"; break;
        case 20:
        case 1:
        case 12: cout << "Player 2 wins"; break;
        default: cout << "Draw";
    }
    */


    /********** تمرین 12 **********
     حل معادله درجه دوم
    *****************************/
    /*
    double a, b, c;
    cin >> a >> b >> c;
    double d = b*b - 4*a*c;
    double x1 = (-b + sqrt(d)) / (2*a);
    double x2 = (-b - sqrt(d)) / (2*a);
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    */


    /********** تمرین 13 **********
     جمع ارقام عدد شش رقمی
    *****************************/
    /*
    int n, sum = 0;
    cin >> n;
    sum += n % 10;
    sum += (n / 10) % 10;
    sum += (n / 100) % 10;
    sum += (n / 1000) % 10;
    sum += (n / 10000) % 10;
    sum += (n / 100000) % 10;
    cout << "Sum = " << sum;
    */

    return 0;
}
