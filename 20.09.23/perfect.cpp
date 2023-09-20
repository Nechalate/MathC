#include <iostream>

using namespace std;

int perfect (int num) {
    int sumOfNum = 0;
    for (int i = 0; i < num; i++) 
    {
        if (num % i == 0) 
        {
            sumOfNum += i;
        }
    }
    return num;
}

int main()
{
    int s;
    cout << "Enter the number: " << endl;
    cin >> s;
    if (s == perfect(s)) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
    return 0;
}