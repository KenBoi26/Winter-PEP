#include<bits/stdc++.h>
using namespace std;

vector<int> boundaryTraversal(vector<vector<int>>& mat) {
    // code here
    vector<int> boundary;
    int leftColumn = 0, rightColumn = mat[0].size()-1, topRow = 0, bottomRow = mat.size()-1;
    for(int i=leftColumn; i<=rightColumn; i++){
        boundary.push_back(mat[topRow][i]);
    }
    topRow++;

    for(int i=topRow; i<=bottomRow; i++){
        boundary.push_back(mat[i][rightColumn]);
    }
    rightColumn--;

    for(int i=rightColumn; i>=leftColumn; i--){
        boundary.push_back(mat[bottomRow][i]);
    }
    bottomRow--;

    for(int i=bottomRow; i>= topRow; i--){
        boundary.push_back(mat[i][leftColumn]);
    }
    leftColumn++;

    return boundary;

}


int main(){


    return 0;
}