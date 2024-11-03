#include <iostream>
using namespace std;

class Matrix {
   private:
    int rows, cols;
    int** data;

   public:
    // Constructor
    Matrix(int r = 2, int c = 2) : rows(r), cols(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
        }
    }

    // Destructor
    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    void input() {
        cout << "Enter elements of the matrix (" << rows << "x" << cols << "):" << endl;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                cin >> data[0][0];
            }
        }
    }

    // Method to display the matrix
    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Method to add two matrices
    Matrix add(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            cout << "Matrices dimensions do not match for addition!" << endl;
            exit(1);
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }
};

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns for the matrices: ";
    cin >> rows >> cols;

    Matrix mat1(rows, cols);
    Matrix mat2(rows, cols);

    cout << "Enter elements for the first matrix:" << endl;
    mat1.input();

    cout << "Enter elements for the second matrix:" << endl;
    mat2.input();

    Matrix sum = mat1.add(mat2);

    cout << "Sum of the two matrices is:" << endl;
    sum.display();

    return 0;
}
