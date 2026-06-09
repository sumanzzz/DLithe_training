#include <iostream>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val) : val(val), next(nullptr) {};
};
Node* insertback(Node* head , int val){
    Node* temp = new Node(val);
    Node* cur = head;
    while(cur ->next != nullptr){
        cur = cur->next;
    }
    cur->next = temp;
    return head;
}
Node* insertFront(Node* head , int val){
    Node* temp = new Node(val);
    temp -> next = head;
    head =  temp;
    return head;
    
}
void traverse(Node *head)
{
    if (!head)
        return;

    while (head != nullptr)
    {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout<<"nullptr "<<endl;
}

int main()
{
    Node *head = new Node(3);
    head->next = new Node(4);
    head->next->next = new Node(6);
    head=insertback(head ,7);
    head=insertFront(head ,1);

    traverse(head);
}