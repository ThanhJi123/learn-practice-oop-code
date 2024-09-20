#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
    int arr[100][100];
    int rows, cols;

public:
	Matrix(int r, int c){
		rows=r;
		cols=c;
	}

    friend istream& operator>>(istream&, Matrix&);
    
    friend ostream& operator<<(ostream&, Matrix&);
    
    friend Matrix operator+(Matrix m1,Matrix m2);

};
    istream& operator>>(istream& in, Matrix& matrix) {

        for (int i = 0; i < matrix.rows; ++i) {
            for (int j = 0; j < matrix.cols; ++j) {
                in >> matrix.arr[i][j];
            }
        }
        return in;
    }
    
ostream& operator<<(ostream& out, Matrix& matrix) {
    for (int i = 0; i < matrix.rows; ++i) {
        for (int j = 0; j < matrix.cols; ++j) {
            out << matrix.arr[i][j] << " ";
        }
        out << endl;
    }
    return out;
}   

Matrix operator+(Matrix m1,Matrix m2) {
        Matrix result(m1.rows,m1.cols);
        for (int i = 0; i < m1.rows; ++i) {
            for (int j = 0; j < m1.cols; ++j) {
                result.arr[i][j] = m1.arr[i][j] + m2.arr[i][j];
            }
        }
        return result;
    } 

int main() {
    int rows=3, cols=3;
    
Matrix mat1(rows,cols),mat2(rows,cols);
    cout << "nhap ma tra 1 : " << endl;
    cin >> mat1;
    cout << "nhap ma tra 2 : " << endl;
    cin>>mat2;
    
    Matrix mat3 = mat1 + mat2;
    cout << "tong 2 ma tra : " << endl;
    cout<<mat3;

}

