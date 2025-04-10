#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<sstream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
};

// Build binary tree from level-order input
TreeNode* buildTree(const vector<string>& nodes) {
    if (nodes.empty() || nodes[0] == "null")
        return nullptr;

    TreeNode* root = new TreeNode(stoi(nodes[0]));
    queue<TreeNode*> q;
    q.push(root);
    size_t i = 1;

    while (!q.empty() && i < nodes.size()) {
        TreeNode* node = q.front();
        q.pop();

        if (i < nodes.size() && nodes[i] != "null") {
            node->left = new TreeNode(stoi(nodes[i]));
            q.push(node->left);
        }
        i++;

        if (i < nodes.size() && nodes[i] != "null") {
            node->right = new TreeNode(stoi(nodes[i]));
            q.push(node->right);
        }
        i++;
    }

    return root;
}

// Print nodes with no sibling
void findNodesWithNoSibling(TreeNode* root) {
    if (!root) return;

    if (root->left && !root->right) {
        cout << root->left->val << " ";
    }
    if (!root->left && root->right) {
        cout << root->right->val << " ";
    }

    findNodesWithNoSibling(root->left);
    findNodesWithNoSibling(root->right);
}

int main() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<string> nodes;
    string node;

    while (ss >> node) {
        nodes.push_back(node);
    }

    TreeNode* root = buildTree(nodes);
    findNodesWithNoSibling(root);
    cout << endl;

    return 0;
}
