#include<iostream>
#include<vector>
using namespace std;

int main() {

                // Declaration -
    vector<vector<int>> matrix;  
        //OR
    vector<vector<int>> matrix(3, vector<int>(4, 0)); // Fixed size and initilize

                // Access elemnent - 

    int x = matrix[0][0]; // Element at row i and column j

                // Input -
    int rows , columns;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    cout<<"Enter the number of columns: ";
    cin>>columns;

    vector<vector<int>> matrix(rows, vector<int>(columns));

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cin>>matrix[i][j];
        }
    }

            // push_back new row
    vector<int> newRow = {1,2,3,4};
    matrix.push_back(newRow);

    return 0;
}