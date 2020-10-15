/*
 * Task #5:
 * Write a program in CPP to find the product of two 3 by 3 matrices entered by the user by overloading
 * binary * operator.
 */

#include <iostream>

using namespace std;

const int N = 3;

class Matrix{
    int a[N][N];

    public:
        void getMatrix();
        void printProduct();
        Matrix operator*(Matrix);
};

void Matrix::getMatrix(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> a[i][j];
        }
    }
}

void Matrix::printProduct(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << a[i][j] << "    ";
        }
        cout << endl;
    }
}

Matrix Matrix::operator*(Matrix t_B){
    Matrix C;
    int result;

    for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                result = 0;
                for(int k = 0; k < N; k++){
                    result += this->a[i][k] * t_B.a[k][j];
                }
                C.a[i][j] = result;
            }
        }
    return C;
}

int main(){
    Matrix A, B, C;

    cout << "Enter the elements of first matrix:" << endl;
    A.getMatrix();
    cout << endl;

    cout << "Enter the elements of second matrix:" << endl;
    B.getMatrix();
    cout << endl;

    C = A * B;

    cout << "The product matrix is: " << endl;
    C.printProduct();

    return 0;
}