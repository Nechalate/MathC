#include <iostream>

using namespace std;

int main() {
    int ROW;
    int COL = 2;
    int num;
    cin >> ROW;

    int nums[ROW][COL];

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cin >> num;
            nums[i][j] = num;
        }
    }
    
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
