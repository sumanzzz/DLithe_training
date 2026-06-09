#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};
void bfs(vector<int>& nodes , TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* cur = q.front();
        q.pop();
        if(!root) return;
        nodes.push_back(root->val);

        if(root->left) q.push(root -> left);
        if(root -> right) q.push(root -> right);
        
    }
}
void postorderTraverse(vector<int>& nodes , TreeNode* root){
    if(!root) return;
    postorderTraverse(nodes , root ->left);
    postorderTraverse(nodes , root -> right);
    nodes.push_back(root -> val);
}
void preorderTraverse(vector<int>& nodes , TreeNode* root){
    if(!root) return;
    preorderTraverse(nodes , root -> left);
    nodes.push_back(root -> val);
    preorderTraverse(nodes , root -> right);
}
void inorderTraverse(vector<int>& nodes , TreeNode* root){
    if(!root) return;
    nodes.push_back(root->val);
    inorderTraverse(nodes , root -> left);
    inorderTraverse(nodes , root -> right);
}
int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<int> nodes;
    // inorderTraverse(nodes , root);
    // for(int num : nodes) cout<<num<<" ";
    // cout<<endl;
    // preorderTraverse(nodes , root);
    // for(int num : nodes) cout<<num<<" ";
    // cout<<endl;
    // postorderTraverse(nodes , root);
    // for(int num : nodes) cout<<num<<" ";
    // cout<<endl;
    bfs(nodes , root);
    for(int num : nodes) cout<<num<<" ";
    cout<<endl;
}
/*
            1
    2                3
4       5       6          7
*/