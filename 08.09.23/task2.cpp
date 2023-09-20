#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    string palendrom;
    cin >> palendrom;
    string copyPalendrom(palendrom);
    reverse(copyPalendrom.begin(), copyPalendrom.end());
    if (palendrom == copyPalendrom) {
        cout << "YES";
    }
    else cout << "NO";
}