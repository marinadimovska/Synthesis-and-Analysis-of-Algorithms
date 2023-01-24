#include <iostream>
using namespace std;

const int ROWS = 25;
const int COLS = 25;

int main() {
    int arr[ROWS][COLS];

    // Fill array with positive numbers
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = i + j;
        }
    }

    // Find pair of elements above main diagonal
    for (int i = 0; i < ROWS; i++) {
        for (int j = i + 1; j < COLS; j++) {
            if ((arr[i][j] % 2 == 0 || arr[i][j] % 2 != 0) && (arr[j][i] % 2 == 0 || arr[j][i] % 2 != 0)) {
                cout << "Found pair: (" << arr[i][j] << ", " << arr[j][i] << ")" << endl;
                return 0;
            }
        }
    }

    cout << "Pair not found" << endl;
    return 0;
}
