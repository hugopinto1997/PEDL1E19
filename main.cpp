#include <iostream>
using namespace std;

void zeroes(int matrix[5][5]){
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j <5 ; ++j) {
            matrix[i][j]=0;
        }
    }
}

void llenarMatrix(int matrix[5][5]){
    for (int i = 0; i <5 ; ++i) {
        int cont = i+1;
        for (int j = 0; j <5 ; ++j) {
            if(j<cont){
                cout<<"ingrese: "<<endl;
                cin>>matrix[i][j];
            }
       }
    }
}

void showMatriz(int matrix[5][5]){
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j <5 ; ++j) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int matriz[5][5];
    zeroes(matriz);
    llenarMatrix(matriz);
    showMatriz(matriz);
    return 0;
}