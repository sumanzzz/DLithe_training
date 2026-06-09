#include <iostream>
#include <unordered_map>
#include <map>
#include <string>
using namespace std;

int main(){
    unordered_map<int, string> mpp;
    mpp.insert({0 , "apple"});
    mpp.insert({1, "mango"});
    mpp.insert({2 , "banana"});
    for(auto &[val , count] : mpp) cout<<val<<" "<<count<<endl; 
}