#include <iostream>
using namespace std;
class Complex{
    public:
    int real;
    float img;
    Complex(int r , float i) : real(r) , img(i){}
    Complex operator+(Complex& rhs){
        this->real = this->real + rhs.real;
        this->img = this->img + rhs.img;
        return *this;
    }
};

int main(){
    Complex number1(5,10.5);
    Complex number2(2,2.4);
    Complex result = number1 + number2;
    cout<<result.real<<"+"<<result.img<<endl;

}
