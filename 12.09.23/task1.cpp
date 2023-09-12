#include <iostream>
#include <bitset>

using namespace std;

void TwoConvert(int i) {
    bitset<16> bitset = i;
    cout << "Двоичное: " << bitset.to_string<char, char_traits<char>, allocator<char> >() << endl;
}

void EightConvert(int i) {
    cout << "Восьмиричное: " << oct << i << endl;
}

void SixTeenConvert(int i) {
    cout << "Шестнадцатиричное: " << hex << i << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int number;
    cout << "Введёное число: ";
    cin >> number;

    TwoConvert(number);
    EightConvert(number);
    SixTeenConvert(number);

    return 0;
}
