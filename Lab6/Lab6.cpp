
#include <iostream>
using namespace std;
int main()
{
    //1
    int a, b, c, d;
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << a << " " << b << endl;

    //2
    cin >> a >> b >> c; // a(c) b(a) c(b)
    d = c;
    c = a;
    a = d;
    d = b;
    b = c;
    c = d;
    cout << a << " " << b << " " << c << endl;

    //3
    cin >> a >> b >> c; // a(b) b(c) c(a)
    d = c;
    c = a;
    a = d;
    d = b;
    b = a;
    a = d;
    cout << a << " " << b << " " << c << endl;

    //4
    cin >> a;
    b = 3 * pow(a, 6) - 3 * pow(a, 2) - 7;
    cout << b << endl;

    //5
    cin >> a;
    b = 4 * pow((a-3), 6) - 7 * pow((a-3), 3) + 2;
    cout << b << endl;

    //6
    cin >> a;
    a = a * a;
    b = a * a;
    a = b * b;
    cout << a << endl;

    //7
    cin >> a;
    b = a * a * a;
    c = b * b;
    a = c * c * b;
    cout << a << endl;
}
