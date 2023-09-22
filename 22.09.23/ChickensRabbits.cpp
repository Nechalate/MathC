#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
//#include <conio.h>

using namespace std;

int main()
{
    int heads;
    int chickenLegs;

    cout << "Enter the heads" << endl;
    cin >> heads;
    cout << "Enter the chicken legs" << endl;
    cin >> chickenLegs;

    cout << endl << "Rabbits: " << (chickenLegs - (heads * 2)) / 2 << " " << "Chicken's: " << heads - (chickenLegs - (heads * 2)) / 2;
}
