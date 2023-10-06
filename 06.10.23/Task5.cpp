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
    cout << "\n��������� ��������� ����������� ��������� ������������." << endl;
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

    cout << "������� 3 ������� ������������:\n";

    cout << "1 �������: "; cin >> sideA;
    cout << "2 �������: "; cin >> sideB;
    cout << "3 �������: "; cin >> sideC; cout << endl;

    Triangle trig(sideA, sideB, sideC);
    TriangleEdges edge(sideA, sideB, sideC);

    //tie(sideA, sideB, sideC) = edge.FindEdges();

    cout << "�������� ������������: "<< trig.Perimentr() << " \n������� ������������ �� ������� ������: " << trig.Ploshad() << "\n���� ������������: " << edge.FindEdges() << endl;
    cout << "������: " << edge.Height() << endl << "���������� ������� �� ������� � ������: " << edge.Perimentr();
      //<< sideA << " " << sideB << " " << sideC;
}
