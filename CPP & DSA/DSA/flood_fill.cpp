#include<bits/stdc++.h>
using namespace std;

void dfs(int r, int c, vector<vector<int>> &image, int ogColor, int newColor){
    int n = image.size();
    int m = image[0].size();

    if(r<0 || r >=n || c<0 || c>=m) return;
    if(image[r][c] != ogColor) return;
    image[r][c] = newColor;
    

    dfs(r-1, c, image, ogColor, newColor);
    dfs(r+1, c, image, ogColor, newColor);
    dfs(r, c-1, image, ogColor, newColor);
    dfs(r, c+1, image, ogColor, newColor);
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int ogColor = image[sr][sc];

    if(ogColor == color) return image;

    dfs(sr, sc, image, ogColor, color);

    return image;
}

int main(){


    return 0;
}