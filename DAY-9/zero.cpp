/*
    1   1   1
    1   0   1
    1   1   1
*/

/*
    0   1   1
    1   1   1
    1   1   1
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n = 3;
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    vector<vector<int>> rows(n , vector<int>(n , 0));
    vector<vector<int>> cols(n , vector<int>(n , 0));

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ;j++){
            if(matrix[i][j] == 1){
                rows[i][0] = 1;
                cols[0][j] = 1;
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < n ;j++){
            if(rows[i][0] == 1) matrix[i][j] = 0;
            if(rows[0][j] == 1) matrix[i][j] = 0;
        }
    }
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}
/*
/*          j
  i 1   1   1
    1   0   1
    1   1   1

rows
    0   0   0
    1   0   0
    0   0   0

cols
    0   1   0
    0   0   0
    0   0   0
    
*/