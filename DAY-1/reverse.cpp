#include <iostream>

using namespace std;

int main(){
    int n = 121;
    int rev = 0;
    int temp = n;
    while(temp != 0){
        int dig = temp % 10;
        rev = rev * 10 + dig;
        temp /= 10;
    }
    cout<<rev<<endl;
    if(rev == n) cout<<"Palindrome"<<endl;
    else cout<<"Not palindrome"<<endl;
}