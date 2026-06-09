#include <iostream>

using namespace std;
int main(){
    int n = 5;
    int k = n-1;
    for(int i = 0 ; i < n ; i++){
        for(int k = 0 ;  k < (n/2)-1 ; k++){
            cout<<" ";
        }
        for(int j = 0 ; j < i + 1 ; j++){
            if(j >=k) cout<<"*";
            else cout<<" ";
        }
        k--;
        cout<<endl;
    }
    
    
}