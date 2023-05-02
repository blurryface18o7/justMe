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

void knode(Node *root,int k)
{
    if (root == NULL) {
        return;
    }
    if (k == 0)
    {
        cout<<root->key<< " ";
        return;
    }

    knode(root->left, k-1);
    knode(root->right, k-1);
}


int main()
{
    // Node *root = NULL;
    Node *root = new Node(10);
    // root->left = new Node(20);
    // root->right = new Node(30);
    // root->right->left = new Node(40);
    // root->right->right = new Node(50);

    // root->left = new Node(8);
    // root->right = new Node(30);
    // // root->right->left = new Node(40);
    // root->right->right = new Node(50);
    // root->right->right->left = new Node(70);

    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(70);
    // root->right->left = new Node(60);
    root->right->right->left = new Node(80);
    root->right->right->right = new Node(80);

    int k = 2;

    knode(root, k);
    cout << endl;
    return 0;
}