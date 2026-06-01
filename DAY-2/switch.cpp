#include <iostream>
#include <string>

#pragma region USER_REGISTRATION
using namespace std;
void userRegister(){
    string username;
    string email;
    string password;

    cout<<"Enter your email:"<<endl;
    cin>>email;
    
    cout<<"Enter your username:"<<endl;
    cin>>username;
    
    cout<<"Enter your password:"<<endl;
    cin>>password;

    cout<<"User registered Successfully!\nEmail :"<<email<<"\nUsername"<<username<<endl;
}
#pragma endregion

#pragma region USER_LOGIN
void userLogin(){
    string username;
    string password;

    cout<<"Enter your username:"<<endl;
    cin>>username;
    
    cout<<"Enter your password:"<<endl;
    cin>>password;

    cout<<"User login Successfull!\nUsername"<<username<<endl;

}
#pragma endregion

#pragma region ADMIN
void adminLogin(){
    string ad_username;
    string ad_password;

    cout<<"Enter your username:"<<endl;
    cin>>ad_password;
    
    cout<<"Enter your password:"<<endl;
    cin>>ad_password;

    cout<<"Admin login Successfull!\nUsername"<<ad_username<<endl;

}
#pragma endregion

int main(){
    int choice;
    
    while(1){
        cout<<"Welcom to hi\n1.Register\n2.Login\n3.Admin Login\n4.Exit\nEnter your choice\n";
    
        cin>>choice;
        switch(choice){
            case 1: 
                userRegister();
                break;
            case 2:
                userLogin();
                break;
            case 3:
                adminLogin();
                break;
            case 4:
                exit(0);
        }
        cout<<endl;
    }
}
// 101
// 001
