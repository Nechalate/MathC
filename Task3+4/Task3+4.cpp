#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int main()
{
    int ROWS = 7;
    int COLS = 7;
    
    int array[ROWS][COLS] = {
    {3, 7, 8, 2, 1, 1, 2},
    {7, 6, 2, 2, 7, 2, 5},
    {1, 2, 9, 2, 5, 3, 1},
    {6, 4, 4, 4, 2, 5, 2},
    {2, 3, 6, 5, 2, 6, 8},
    {1, 1, 7, 2, 3, 7, 9},
    {6, 7, 2, 5, 3, 9, 6}};
    
    cout << "Задание 3" << endl;
    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int j = 0; j < COLS; j++) {
        int lastDigit = array[0][j];
        for (int i = 1; i < ROWS; i++) {
            if (lastDigit < array[i][j]) {
                lastDigit = array[i][j];
                if (i == ROWS-1) {
                    cout << "Столбец номер: " << j+1 << endl;
                }
            }
            else {
                break;
            }
        }
    }
    
    cout << "Задание 4" << endl;
    
    for (int i = 0; i < ROWS; i++) {
        for (int j = i + 1; j < COLS; j++) {
            int tmp = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = tmp;
        }
    }
    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
}



