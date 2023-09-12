#include <iostream>
#include <bitset>

using namespace std;

void TwoConvert(int i) {
    bitset<16> bitset = i;
    cout << "��������: " << bitset.to_string<char, char_traits<char>, allocator<char> >() << endl;
}

void EightConvert(int i) {
    cout << "������������: " << oct << i << endl;
}

void SixTeenConvert(int i) {
    cout << "�����������������: " << hex << i << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int number;
    cout << "������� �����: ";
    cin >> number;

    TwoConvert(number);
    EightConvert(number);
    SixTeenConvert(number);

    return 0;
}
