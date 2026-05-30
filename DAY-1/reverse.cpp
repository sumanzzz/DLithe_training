#include <iostream>

using namespace std;

int main(){
    int n = 123456;
    int rev = 0;
    int temp = n;
    while(temp != 0){
        int dig = temp % 10;
        rev = rev * 10 + dig;
        temp /= 10;
    }
    if(rev == n) cout<<"true"<<endl;
    else cout<<"False"<<endl;
}