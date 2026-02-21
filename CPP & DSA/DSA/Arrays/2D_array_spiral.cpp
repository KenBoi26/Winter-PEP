#include<bits/stdc++.h>
using namespace std;

void spiralPrintClockwise(int matrix[4][4]) {
    int rightColumn = 3;
    int leftColumn = 0;
    int bottomRow = 3;
    int topRow = 0;

    while(topRow <= bottomRow && leftColumn <= rightColumn){
        for(int i=leftColumn; i<=rightColumn; i++){
            cout << matrix[topRow][i] << " ";
        }
        topRow++;

        for(int i=topRow; i<=bottomRow; i++){
            cout << matrix[i][rightColumn] << " ";
        }
        rightColumn--;

        if(topRow<=bottomRow){
            for(int i=rightColumn; i>=leftColumn; i--){
                cout << matrix[bottomRow][i] << " ";
            }
            bottomRow--;
        }
        
        if(leftColumn <= rightColumn){
            for(int i=bottomRow; i>= topRow; i--){
                cout << matrix[i][leftColumn] << " ";
            }
            leftColumn++;
        }
    }
}

void spiralPrintAntiClockwise(int arr[4][4]){
    int topRow = 0, bottomRow = 3, leftColumn = 0, rightColumn=3;

    while(topRow < bottomRow && leftColumn < rightColumn){

        for(int i=rightColumn; i>=leftColumn; i--){
            cout << arr[topRow][i] << " ";
        }
        topRow++;

        for(int i=topRow; i<=bottomRow; i++){
            cout << arr[i][leftColumn] << " ";
        }
        leftColumn++;

        for(int i=leftColumn; i<=rightColumn; i++){
            cout << arr[bottomRow][i] << " ";
        }
        bottomRow--;

        for(int i=bottomRow; i>= topRow; i--){
            cout << arr[i][rightColumn] << " ";
        }
        rightColumn--;
    }
}


int main(){

    int arr1[4][4] = {{1,7,14,6},{11,15,5,10},{2,4,16,3},{9,13,8,12}};
    cout << "Clockwise: ";
    spiralPrintClockwise(arr1);
    cout << endl;
    cout << "Anti-Clockwise: ";
    spiralPrintAntiClockwise(arr1);

    return 0;
}