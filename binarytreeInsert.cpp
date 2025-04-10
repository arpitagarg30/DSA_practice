#include<iostream> 
#include<vector>
#include<string>
#include<queue>
#include<sstream>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(nullptr),right(nullptr){}
};
TreeNode* buildTree(const vector<string>& nodes){
   if(nodes.empty()||nodes[0]=="null")
   return nullptr;
TreeNode* root=new TreeNode(stoi(nodes[0]));
queue<TreeNode*>q;
q.push(root);
size_t i=1;
while(!q.empty() && i<nodes.size()){
    TreeNode* node=q.front();
    q.pop();
    if(nodes[i]!="null"){
        node->left=new TreeNode(stoi(nodes[i]));
        q.push(node->left);
    }
    i++;
    if(i<nodes.size()&&nodes[i]!="null"){
        node->right=new TreeNode(stoi(nodes[i]));
        q.push(node->right);
    }
    i++;
}
return root;
}
void inorderTraversal(TreeNode* root){
    if (!root) return;
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}
void postorderTraversal(TreeNode* root){
    if(!root) return;
    postorderTraversal(root->right);
    postorderTraversal(root->left);
    cout<<root->val<<" ";
}
int main(){
    int n;
    cin>>n;
    cin.ignore();
    string line;
    getline(cin,line);
    stringstream ss(line);
    vector<string>nodes;
    string node;
    while(ss>>node){
        nodes.push_back(node);
    }
    TreeNode* root= buildTree(nodes);
    cout<<"InorderTraversal is:";
    inorderTraversal(root);
    cout<<endl;
    cout<<"PostorderTraversal is:";
    postorderTraversal(root);
    cout<<endl;
    cout<<endl;
    return 0;
}