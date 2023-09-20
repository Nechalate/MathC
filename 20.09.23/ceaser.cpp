#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int index = 0;
    int shift;
    string text;

    cout << "Enter the text" << endl;
    getline(cin, text);
    cout << "Enter the num" << endl;
    cin >> shift;
    cout << "The result: ";

    const int number = text.length();
    char cipher[number - 1] = {};
    for (int i = 0; i < number; i++)
    {
        int symbol = text[index];
        symbol += shift;
        cipher[index] = symbol;
        index += 1;
    }
        cout << cipher << endl;
        cout << "decoder: " << endl;
        
        int amount = strlen(cipher);
        char decipher[amount] = {};
        index = 0;
        for (int a = 0; a < amount; a++) {
            int mark = cipher[index];
            mark -= shift;
            decipher[index] = mark;
            cout << decipher[index];
            index += 1;
        }
    
    return 0;
}