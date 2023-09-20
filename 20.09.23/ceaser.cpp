#include <iostream>
#include <string>

using namespace std;

const int ALPH_num = 25;
const int ALPH_start = 65;
const int ALPH_end = 97;

int main()
{
    string text;
    int numOfShift;
    
    cin >> text;
    cin >> numOfShift;
    
    for (int i = 0; i < text.length(); i++) {
        if (text[i] >= ALPH_start && text[i] <= ALPH_start + ALPH_num ||
        text[i] >= ALPH_end && text[i] <= ALPH_start + ALPH_num) {
            text[i] =+ text[i] + numOfShift;
        }
    }

    cout << text;
    
    return 0;
}