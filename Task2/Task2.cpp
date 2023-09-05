/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for (double x = -2; x <= 2; x += 0.4) 
    {
        if (x <= 0)
        {
            double s = 0;
            for (int k = 1; k <= 3; k++)
            {
                double d = pow(x, k) / k;
                s += d;
            }
            cout << pow(x, 2) + s << endl;
        }
        else 
        {
            x = pow(x, 3);
            cout << pow(x, 0.2) << endl;
        }
    }
}
