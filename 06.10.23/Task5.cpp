#include <iostream>
#include <math.h>
#include <tuple>

using namespace std;

class Triangle
{
public:
    double sideA;
    double sideB;
    double sideC;

Triangle(double _sideA, double _sideB, double _sideC) // Constructor
{
    sideA = _sideA;
    sideB = _sideB;
    sideC = _sideC;
}

~Triangle() // Destructor
{
    cout << "\nПоследний введенный треугольник уничтожен деструктором." << endl;
}

double Perimentr() // Method 1
{
    return sideA + sideB + sideC;
}

double Ploshad() // Method 2
{
    double p = (sideA + sideB + sideC) / 2;
    double s = sqrt(p*(p-sideA)*(p-sideB)*(p-sideC));
    return s;
}
};

class TriangleEdges : public Triangle
{
private:
    double PI = 3.14;

public:
    TriangleEdges(double _sideA, double _sideB, double _sideC) : Triangle(_sideA, _sideB, _sideC) {}


double FindEdges()
{
    double edge = (pow(sideB, 2) + pow(sideB, 2) - pow(sideC, 2)) / (2*sideA*sideB);

    return acos(edge) * 180 / PI;
}

double Height()
{
    double s = Ploshad();
    double h = (2*s)/sideA;

    return h;
}

double Perimentr()
{
    double s = Ploshad();
    double h = Height();

    return 2 * s / h;
}
};

int main()
{
    setlocale(LC_ALL,"Russian");

    double sideA, sideB, sideC;

    cout << "Введите 3 стороны треугольника:\n";

    cout << "1 сторона: "; cin >> sideA;
    cout << "2 сторона: "; cin >> sideB;
    cout << "3 сторона: "; cin >> sideC; cout << endl;

    Triangle trig(sideA, sideB, sideC);
    TriangleEdges edge(sideA, sideB, sideC);

    //tie(sideA, sideB, sideC) = edge.FindEdges();

    cout << "Периметр треугольника: "<< trig.Perimentr() << " \nПлощадь треугольника по формуле Герона: " << trig.Ploshad() << "\nУглы треугольника: " << edge.FindEdges() << endl;
    cout << "Высота: " << edge.Height() << endl << "Нахождение площади по площади и высоте: " << edge.Perimentr();
      //<< sideA << " " << sideB << " " << sideC;
}
