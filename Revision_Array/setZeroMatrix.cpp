#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void mark(vector<vector<int>>& mat, int i, int j) {
    int m = mat.size();
    int n = mat[0].size();

    for(int x = 0; x < m; x++) {
        for(int y = 0; y < n; y++) {
            if(x == i || y == j && mat[x][y] != 0) mat[x][y] = -1;
        }
    }
}

void bruteForce(vector<vector<int>>& mat) {
    int m = mat.size();
    int n = mat[0].size();

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(mat[i][j] == 0) {
                mark(mat, i, j);
            }
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(mat[i][j] == -1) mat[i][j] = 0;
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) cout<<mat[i][j]<<" ";
        cout<<endl;
    }
}

int main() {
    int m;
    cout<<"mat.length: ";
    cin>>m;

    int n;
    cout<<"mat[0].length: ";
    cin>>n;

    vector<vector<int>> mat(m, vector<int>(n));
    cout<<"Enter the elements of matrix: ";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin>>mat[i][j];
        }
    }

    bruteForce(mat);   // SC: O(1)    TC: O((m*n)^2)
    
    return 0;
}