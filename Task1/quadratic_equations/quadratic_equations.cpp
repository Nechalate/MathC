#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Введите число a: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;
    cout << "Введите число c: ";
    cin >> c;
    double D = pow(b, 2) - 4 * a * c;
    if (D > 0) {
        double x1 = ((-b + sqrt(D)) / 2 * a);
        double x2 = ((-b - sqrt(D)) / 2 * a);
        cout << "x1 = " + to_string(x1) << endl;
        cout << "x2 = " + to_string(x2) << endl;
    }
    else if (D == 0) {
        double x1 = -b / (2 * a);
        cout << "x1 = " + to_string(x1);
    }
    else {
        cout << "Нет решений.";
    }

    return 0;
}
