#include <iostream>

using namespace std;
void fullStar(int n){
    for(int i = 0 ; i < n ; i++){
        printf("*");
    }
}
void halfStar(int n){
    for(int i = 0 ; i < n ; i++){
        if(i == 0 || i == n - 1){
            cout<<"*";
        }
        else cout<<" ";
    }
}
int main(){
    int n = 10;
    for(int i = 0 ; i <n ; i++){
        if(i == 0 || i == n -1){
            fullStar(n);
        }
        else halfStar(n);
        cout<<endl;
    }
}