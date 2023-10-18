#include <iostream>
#include <cmath>

using namespace std;

int katet(int a, int b)
{
    return sqrt(b * b - a * a);
}

int ploshad(int a, int b)
{
    return (a * sqrt(b * b - a * a)) / 2;
}

int main()
{
    setlocale(LC_ALL, "RUS");

    int a, b;

    cout << "Введите катет: "; cin >> a; 
    cout << "Введите гипотенузу: "; cin >> b;
    cout << katet(a, b) << endl;
    cout << ploshad(a, b);
}

