#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n = 3 ;
    vector<vector<int>> matrix = {{1,2,3} , {4,5,6} ,{7,8,9}};
    vector<vector<int>> trans(n , vector<int>(n , 0));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ;j++){
            trans[i][j] = matrix[j][i];
        }
    }
    cout<<endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(auto& row : trans) reverse(row.begin() , row.end());

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
}                                                       
/*
1 0 0
0 0 1
1 0 0
*/