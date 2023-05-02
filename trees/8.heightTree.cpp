#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

int height(Node *root) {
    if (root == NULL) {
        return 0;
    }

    int l = 1 + height(root->left);
    int r = 1 + height(root->right);
    return max(l,r);
}

int main()
{
    // Node *root = NULL;
    Node *root = new Node(10);
    // root->left = new Node(20);
    // root->right = new Node(30);
    // root->right->left = new Node(40);
    // root->right->right = new Node(50);
    root->left = new Node(8);
    root->right = new Node(30);
    // root->right->left = new Node(40);
    root->right->right = new Node(50);
    root->right->right->left = new Node(70);


    cout<< height(root) << endl;
    return 0;
}

