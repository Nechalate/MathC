#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    cout << "Enter the cube length" << endl;;
    cin >> a;
    double _a = pow(a, 2);
    double surface = _a * 6;
    double v = pow(a, 3);
    cout << "The area of the cube face: " << _a << endl;
    cout << "Cube surface area: " << surface << endl;
    cout << "Cube volume: " << v << endl;
}
