#include<iostream>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value){
       val=value;
       left=nullptr;
       right=nullptr;
    }
};
TreeNode* insert(TreeNode* root,int val){
    if(root==nullptr){
        return new TreeNode(val);
    }
    if(val<root->val){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
}
void inorderTraversal(TreeNode* root){
    if(root==nullptr) return;
    inorderTraversal(root->left);
    cout<<root->val<<" ";
    inorderTraversal(root->right);
}
void postorderTraversal(TreeNode* root){
    if(root==nullptr) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->val<<" ";
}
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    TreeNode* root=nullptr;
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        root=insert(root,val);
    }
    cout<<"Inorder Traversal (sorted BST elements): ";
    inorderTraversal(root);
    cout<<endl;
    return 0;
}