#include <iostream>

using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;

    Rectangle(int l , int b) : length(l) , breadth(b){}
    Rectangle operator*(Rectangle& rhs){
        this->length = this->length + rhs.length;
        this->length = this->breadth + rhs.breadth;
        return *this;
    }    
    
};

int main(){
    Rectangle rec1(4,5);
    Rectangle rec2(2,3);
    Rectangle result = rec1 * rec2;

    cout<<result.length<<" "<<result.breadth<<endl;

}