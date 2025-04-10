#include<iostream>
#include<queue>
#include<climits>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* buildTree() {
    cout << "Enter root node value (-1 for NULL): ";
    int val;
    cin >> val;

    if (val == -1) return NULL;

    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        cout << "Enter left child of " << current->data << " (-1 for NULL): ";
        int leftVal;
        cin >> leftVal;
        if (leftVal != -1) {
            current->left = new Node(leftVal);
            q.push(current->left);
        }

        cout << "Enter right child of " << current->data << " (-1 for NULL): ";
        int rightVal;
        cin >> rightVal;
        if (rightVal != -1) {
            current->right = new Node(rightVal);
            q.push(current->right);
        }
    }
    return root;
}
bool checkBST(Node* temp){
    if(temp==nullptr){
        return true;
    }
    if(temp->left!=nullptr){
        if(temp->left->data >= temp->data){
            return false;
        }
        if(!checkBST(temp->left)){
            return false;
        }
    }
    if(temp->right!=nullptr){
        if(temp->right->data <= temp->data){
            return false;
        }
        if(!checkBST(temp->right)){
            return false;
        }
    }
    return true;
}

int main() {
    Node* root=buildTree();
    cout<<(checkBST(root) ? "true" : "false")<<endl;

    return 0;
}