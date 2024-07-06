#include <iostream>

int main() {
    // Number of rows
    int rows = 3;

    // Create an array of pointers to int
    int** jaggedArray = new int*[rows];

    // Define the size of each row
    jaggedArray[0] = new int[2]; // First row with 2 elements
    jaggedArray[1] = new int[4]; // Second row with 4 elements
    jaggedArray[2] = new int[3]; // Third row with 3 elements

    // Initialize the jagged array
    jaggedArray[0][0] = 1;
    jaggedArray[0][1] = 2;

    jaggedArray[1][0] = 3;
    jaggedArray[1][1] = 4;
    jaggedArray[1][2] = 5;
    jaggedArray[1][3] = 6;

    jaggedArray[2][0] = 7;
    jaggedArray[2][1] = 8;
    jaggedArray[2][2] = 9;

    // Print the jagged array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < (sizeof(jaggedArray[i]) / sizeof(jaggedArray[i][0])); ++j) {
            std::cout << jaggedArray[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Clean up the allocated memory
    for (int i = 0; i < rows; ++i) {
        delete[] jaggedArray[i];
    }
    delete[] jaggedArray;

    return 0;
}
