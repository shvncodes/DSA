#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void solution(vector<vector<int>>& mat) {
    int m = mat.size();
    int n = mat[0].size();
    vector<int> ans;
    int lft = 0, rgt = n-1;
    int top = 0, btm =  m-1;

    while(top <= btm && lft <= rgt) {

        for(int i = lft; i <= rgt; i++) ans.push_back(mat[top][i]);
        top++;

        for(int i = top; i <= btm; i++) ans.push_back(mat[i][rgt]);
        rgt--;

        if(top <= btm) {
            for(int i = rgt; i >= lft; i--) ans.push_back(mat[btm][i]);
            btm--;
        }

        if(lft <= rgt) {
            for(int i = btm; i >= top; i--) ans.push_back(mat[i][lft]);
            lft++;
        }       
    }
 
    for(int i = 0; i < ans.size(); i++) {
        cout<<ans[i]<<" ";
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

    solution(mat);   // SC: O(m*n)    TC: O(m*n)
    
    return 0;
}