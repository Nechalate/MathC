#include <iostream>

using namespace std;

void sumOfSelledProducts(int numOfProduct, double money) {
    double product1;
    double product2;
    double product3;
    double product4;
    double product5;
    switch (numOfProduct)
    {
        case(1):
            product1 += money;
        break;
        case(2):
            product2 += money;
        break;
        case(3):
            product3 += money;
        break;
        case(4):
            product4 += money;
        break;
        case(5):
            product5 += money;
        break;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int numOfPayment;
    int countOfPayment;
    double cost;
    double timedSell;
    double sumOfSell;

    string nameOfWeek[7] = {"�����������", "�������", "�����", "�������", "�������", "�������", "�����������"};

    for (int i = 0; i < 7; i++) {
        cout << "�������� ����� ��������: ";
        cin >> numOfPayment;
        cout << "�������� ���-�� ��������: ";
        cin >> countOfPayment;

        switch(numOfPayment)
        {
            case(1):
                cost = 2.98;
            break;
            case(2):
                cost = 4.50;
            break;
            case(3):
                cost = 9.98;
            break;
            case(4):
                cost = 4.49;
            break;
            case(5):
                cost = 6.87;
            break;
            default:
                cout << "����� ������� ����." << endl;
            break;
        }
        timedSell = countOfPayment * cost;
        sumOfSell += timedSell;
        cout << "����� ������ �� " << nameOfWeek[i] << ": " << timedSell << "$" << endl << endl;;
        sumOfSelledProducts(numOfPayment, timedSell);
    }
    /*
    for (int i = 0; i < 5; i++) {
        cout <<
    }
    */
    cout << "����� ����� ������ �������: " << sumOfSell;

    return 0;
}
