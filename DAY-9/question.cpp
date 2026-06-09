#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val) : val(val), next(nullptr) {};
};
int main(){
    
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    // head->next->next->next = new Node(4);
    // head->next->next->next->next = new Node(5);
    vector<int> list;
    Node* cur = head;
    while(cur){
        list.push_back(cur->val);
        cur = cur ->next;
    }
    vector<int> rev = list;
    reverse(rev.begin() , rev.end());
    (list == rev) ? cout<<"Palindrome"<<endl : cout<<"Not Palindrome";
    
    

}
// inline , const expr , const eval