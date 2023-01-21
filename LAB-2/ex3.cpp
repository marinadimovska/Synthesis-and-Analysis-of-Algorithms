#include <iostream>
using namespace std;

int main() {
    int array[] = {1, 2, 3, 4, 5, 1, 2, 3};
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j <= size; j++) {
            if (array[i] == array[j]) {
                cout << array[i] << " is a duplicate element." << endl;
            }
        }
    }
    return 0;
}
