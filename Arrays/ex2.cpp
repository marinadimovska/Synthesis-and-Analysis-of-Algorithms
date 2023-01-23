#include <iostream>
#include <vector>

int main() {
    int x, y;
    std::cout << "Enter the interval: ";
    std::cin >> x >> y;

    int rows, cols;
    std::cout << "Enter the number of rows and columns: ";
    std::cin >> rows >> cols;

    // Create a 2D array
    int** twoDArray = new int*[rows];
    for (int i = 0; i < rows; i++) {
        twoDArray[i] = new int[cols];
    }

    // Fill the 2D array with user input
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "Enter element at position (" << i << ", " << j << "): ";
            std::cin >> twoDArray[i][j];
        }
    }

    // Count the number of elements in the interval
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (twoDArray[i][j] >= x && twoDArray[i][j] <= y) {
                count++;
            }
        }
    }

    // Create a 1D array to store the elements in the interval
    int* oneDArray = new int[count];

    // Fill the 1D array with elements from the 2D array that are in the interval
    int index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (twoDArray[i][j] >= x && twoDArray[i][j] <= y) {
                oneDArray[index] = twoDArray[i][j];
                index++;
            }
        }
    }

    // Print the 1D array
    std::cout << "Elements in the interval: ";
    for (int i = 0; i < count; i++) {
        std::cout << oneDArray[i] << " ";
    }

    // Deallocate the memory
    for (int i = 0; i < rows; i++) {
        delete[] twoDArray[i];
    }
    delete[] twoDArray;
    delete[] oneDArray;

    return 0;
}
