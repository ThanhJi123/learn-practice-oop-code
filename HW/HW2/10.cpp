#include <iostream>

using namespace std;

void inputMatrix(int arr[][100], int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            cout << "arr [" << i << "," << j << "]: ";
            cin >> arr[i][j];
        }
    }
}

void displayMatrix(int arr[][100], int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void rotateMatrix(int arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            swap(arr[i][j], arr[i][n - j - 1]);
        }
    }
}

int main() {
    int n;
    cout << "nhap n : ";
    cin >> n;

    int arr[100][100];

    inputMatrix(arr, n, n);
    
    cout << "display matrix :" << endl;
    displayMatrix(arr, n, n);
    
    rotateMatrix(arr,n);
    
    cout << "display rotate matrix :" << endl;
    displayMatrix(arr, n, n);

}

