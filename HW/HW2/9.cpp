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

int main() {
    int hang, cot;
    cout << "nhap hang : ";
    cin >> hang;
    cout << "nhap cot : ";
    cin >> cot;

    int arr[100][100];

    inputMatrix(arr, hang, cot);
    
    cout << "display matrix :" << endl;
    displayMatrix(arr, hang, cot);

}

