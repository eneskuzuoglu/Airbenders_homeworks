#include <iostream>
#include <vector>

using namespace std;

// Function to read values for coordinates on the matrix
int readValueForCoordinate(int row, int col) {
    int value;
    cout << "Enter value for (" << row << ", " << col << "): ";
    cin >> value;
    return value;
}

// Function to create a matrix of given rows and columns and populate it with values
vector<vector<int>> createMatrix(int rows, int cols) {
    vector<vector<int>> matrix(rows, vector<int>(cols, 0));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = readValueForCoordinate(i + 1, j + 1);
        }
    }
    return matrix;
}

// Function to add two matrices
vector<vector<int>> addMatrices(const vector<vector<int>>& matrix1, const vector<vector<int>>& matrix2) {
    int rows = matrix1.size();
    int cols = matrix1[0].size();
    vector<vector<int>> result(rows, vector<int>(cols, 0));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return result;
}

// Function to subtract two matrices
vector<vector<int>> subtractMatrices(const vector<vector<int>>& matrix1, const vector<vector<int>>& matrix2) {
    int rows = matrix1.size();
    int cols = matrix1[0].size();
    vector<vector<int>> result(rows, vector<int>(cols, 0));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    return result;
}

// Function to print a matrix
void printMatrix(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter values for Matrix A:" << endl;
    vector<vector<int>> matrixA = createMatrix(rows, cols);

    cout << "Enter values for Matrix B:" << endl;
    vector<vector<int>> matrixB = createMatrix(rows, cols);

    cout << "Matrix A:" << endl;
    printMatrix(matrixA);

    cout << "Matrix B:" << endl;
    printMatrix(matrixB);

    vector<vector<int>> sumMatrix = addMatrices(matrixA, matrixB);
    vector<vector<int>> differenceMatrix = subtractMatrices(matrixA, matrixB);

    cout << "Sum of Matrix A and Matrix B:" << endl;
    printMatrix(sumMatrix);

    cout << "Difference of Matrix A and Matrix B:" << endl;
    printMatrix(differenceMatrix);

    return 0;
}
