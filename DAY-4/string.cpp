#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
string substr(int start  , int end , string str){
    string res;
    for(int i = start  - 1 ; i < end  ; i++){
        res.push_back(str[i]);
    }
    return res;
}
bool isEmpty(string str){
    if(str[0] == '\0') return true;
    else return false;
}
int size(string str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}
int find(string str , char key){
    int n = str.size();
    for(int i = 0 ; i < n ;i++){
        if(str[i] == key) return i;
    }
    return -1;
}
string join(string str1 , string str2){
    // return str1 +" "+ str2;
    str1 += " ";
    for(char c : str2)   str1 += c;
    return str1;
}
string joinstring(vector<string> str){
    string res;
    for(string s : str){
        res += s;
        res += " ";
    }
    return res;
}
int main(){
    // string name;
    // string dept;
    // string classno;
    // getline(cin , name);
    // getline(cin,dept);
    // getline(cin, classno);
    // cout<<name<<"\n"<<dept<<"\n"<<classno;
    string str1 = "hello";
    string str2 = "world";
    vector<string> str = {"reegan" , "suman" , "karkada"};
    // int st = 3 , end = 5;
    // // string res = substr(st , end , str);
    // string res;
    //cout<<join(str1 ,str2)<<endl;
    cout<<joinstring(str)<<endl;
    // (isEmpty(str)) ? cout<<"True"<<endl :cout<< "False"<<endl;
    // cout<<find(str , 'e')<<endl;
    
}