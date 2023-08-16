#include <iostream>

int main() {
    int rows, cols;

    // Take input for the number of rows and columns
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    // Declare a 2D array to store the elements
    int matrix[rows][cols];

    // Take input for the matrix row-wise
    std::cout << "Enter the matrix elements row-wise:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // Print the matrix column-wise
    std::cout << "Matrix elements printed column-wise:\n";
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
