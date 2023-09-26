#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void ShellSort(int n, int numArray[])
{
    int i, j, step;
    int tmp;

    for (step = n / 2; step > 0; step /= 2)
        for (i = step; i < n; i++)
        {
            tmp = numArray[i];
            for (j = i; j >= step; j -= step)
            {
                if (tmp < numArray[j - step])
                    numArray[j] = numArray[j - step];
                else
                    break;
            }
            numArray[j] = tmp;
        }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите кол-во элементов массива: ";
    cin >> n;
    cout << endl;
    int numArray[n] {};

    for (int i = 0; i < n; i++) {
        numArray[i] = rand();
    }

    cout << "Изначальный массив: " << endl;

    for (int i = 0; i < n; i++) {
        cout << numArray[i] << " ";
    }

    ShellSort(n, numArray);

    cout << endl << "Измененный массив: " << endl;

    for (int i = 0; i < n; i++) {
        cout << numArray[i] << " ";
    }

    return 0;
}
