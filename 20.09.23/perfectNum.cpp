#include <iostream>

using namespace std;

    bool Perfect (int num) 
    {
      int sum = 0;
      for (int i = 1; i < num; i++) 
      {
        if(num % i == 0) sum += i;
      }
    
      if (sum == num) return true;
      else return false;
    }

    int main() {
      for (int i = 1; i < 1000; ++i) 
      {
        if (Perfect(i) == true) cout << i << endl;
      }
    }
