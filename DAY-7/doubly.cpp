#include <iostream>

using namespace std;
class Node{
    public :
    int val;
    Node* next;
    Node* prev;

    Node(int val) : val(val) , next(nullptr) , prev(nullptr){};
};
void traverse(Node* head){
    if(!head) return;
    while(head!= nullptr){
        cout<<head->val<<" -> ";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
void reversetraverse(Node* head){
    if(!head) return;
    while(head -> next!= nullptr){
        head = head->next;
    }
    while(head != nullptr){
        cout<<head->val<<" -> ";
        head = head->prev;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head = new Node(2);

    head->next = new Node(3);
    head->next->prev = head;

    head->next->next = new Node(4);
    head->next->next->prev = head->next;
    traverse(head);
    reversetraverse(head);


}