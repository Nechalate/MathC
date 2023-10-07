#include <iostream>

using namespace std;

class Date
{
public:
    int day;
    int mounth;
    int year;

    Date(int _day, int _mounth, int _year)
    {
        day = _day;
        mounth = _mounth;
        year = _year;
    }

    void DateConfirm()
    {
        if (day != 31 && mounth != 12 && year > 0)
        {
            cout << "Дата введена корректно.";
        }
        else
        {
            cout << "Дата введена некорректна.";
        }
    }
};

class DateWeek : public Date
{
public:
    string dayOfWeek;

    DateWeek(int day, int mounth, int year) : Date(day, mounth, year) {}

};

int main()
{
    setlocale(LC_ALL, "Russian");

    int day, mounth, year;

    cout << "День: "; cin >> day;
    cout << "Месяц: "; cin >> mounth;
    cout << "Год: "; cin >> year;

    Date _date(day, mounth, year);
    
    _date.DateConfirm();
}