#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int row, col;
    cout << "Enter the row and column index: ";
    cin >> row >> col;
    cout << "The element at index [" << row << "][" << col << "] is: " << arr[row][col] << endl;
    return 0;
}
