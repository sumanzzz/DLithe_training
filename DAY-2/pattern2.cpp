#include <iostream>

using namespace std;

int main(){
    int n = 5 , m = n * 2-2 ;
    int left = 0 , right = m ;
    for(int i = 0 ; i < n ; i++){
        for(int j  = 0 ; j <= m ; j++){
            if(j == left || j == right) cout<<"*";
            else cout<<" ";
        }
        left++;
        right--;
        cout<<endl;
    }
}