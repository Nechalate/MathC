#include <iostream>
#include <string>

using namespace std;

string numberToWords(int number) {
    string units[] = { "", "����", "���", "���", "������", "����", "�����", "����", "������", "������" };
    string teens[] = { "", "�����������", "����������", "����������", "������������", "����������", "�����������", "����������", "������������", "������������" };
    string tens[] = { "", "������", "��������", "��������", "�����", "���������", "����������", "���������", "�����������", "���������" };

    int thousands = number / 1000;
    int hundreds = (number / 100) % 10;
    int teensAndOnes = number % 100;

    string result;

    if (thousands > 0) {
        result += units[thousands] + " ����� ";
    }

    if (hundreds > 0) {
        result += units[hundreds] + "��� ";
    }

    if (teensAndOnes > 0) {
        if (teensAndOnes < 10) {
            result += units[teensAndOnes];
        }
        else if (teensAndOnes < 20) {
            result += teens[teensAndOnes - 10];
        }
        else {
            int tensDigit = teensAndOnes / 10;
            int onesDigit = teensAndOnes % 10;
            result += tens[tensDigit];
            if (onesDigit > 0) {
                result += " " + units[onesDigit];
            }
        }
    }

    return result;
}

int main() {
    setlocale(LC_ALL, "RUS");
    double cost;
    cout << "������� ��������� ������: ";
    cin >> cost;

    if (cost < 0) {
        cout << "������� ������������� �����." << endl;
    }
    else {
        int rubles = static_cast<int>(cost);
        int kopecks = static_cast<int>((cost - rubles) * 100);

        string rublesText = numberToWords(rubles);
        string kopecksText = numberToWords(kopecks);

        cout << rublesText << " ����� ";
        if (kopecks > 0) {
            cout << kopecksText << " �������";
        }
        cout << endl;
    }

    return 0;
}