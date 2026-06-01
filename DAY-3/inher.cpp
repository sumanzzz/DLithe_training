#include <iostream>

using namespace std;

class Animal{
    public:
    virtual void sound(){
        cout<<"general Animal sound"<<endl;
    }
};
class Dog: public Animal{
    public:
    void sound(){
        cout<<"Bow Bow"<<endl;
    }
};

int main(){
    Animal* a = new Dog;
    a->sound();

}