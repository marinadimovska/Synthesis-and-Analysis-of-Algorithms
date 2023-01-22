#include <iostream>
using namespace std;

int main() {
    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;
    int rows = 3;
    int cols = 3;
    for (int i = 0; i < rows; i++) {
        for (int j = cols-1; j >= 0; j--) {
            if(i+j == rows-1) sum += array[i][j];
        }
    }
    cout << "Sum of secondary diagonal elements: " << sum << endl;
    return 0;
}
