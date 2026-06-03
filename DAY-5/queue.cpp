#include <iostream>
#include <vector>
using namespace std;
class Queue{
    private:
    vector<int> queue; 
    int count = 0;

    public:
    void push(int val){
        queue.push_back(val);
        count++;
    }
    void pop(){
        queue.erase(queue.end());
        count--;
    }
    bool empty(){
        return count == 0;
    }
    int size(){
        return count;
    }
    int front(){
        return queue[count - 1];
    }
    


};
int main(){
    Queue q;
    q.push(5);
    q.push(6);
    q.pop();
    cout<<q.front()<<endl;
}
// push
// pop
// back
// empty
// size