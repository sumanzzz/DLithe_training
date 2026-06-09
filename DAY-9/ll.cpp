// ll values are 1 2 3 4 5
#include <iostream>
class Node
{
public:
    int val;
    Node *next;

    Node(int val) : val(val), next(nullptr) {};
};
using namespace std;
int main(){
    
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    Node* first = head;
    Node* last = head;

    while (first != nullptr && first->next != nullptr)
    {
        first = first->next->next;
        last = last->next;
    }
    cout<< last->val<<endl;
    
    

}