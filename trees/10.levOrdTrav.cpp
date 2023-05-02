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

void knode(Node *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->key << " ";
        return;
    }

    knode(root->left, k - 1);
    knode(root->right, k - 1);
}

int height(Node *root) {
    if (root == NULL) {
        return 0;
    }

    return max(height(root->left), height(root->right)) + 1;
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

    // root->left = new Node(20);
    // root->right = new Node(30);
    // root->left->left = new Node(40);
    // root->left->right = new Node(50);
    // root->right->right = new Node(70);
    // // root->right->left = new Node(60);
    // root->right->right->left = new Node(80);
    // root->right->right->right = new Node(90);

    // root->left = new Node(20);
    // root->right = new Node(30);
    // root->left->left = new Node(8);
    // root->left->right = new Node(7);
    // root->left->right->left = new Node(9);
    // root->left->right->right = new Node(15);
    // root->right->right = new Node(6);

    // root->left=new Node(4);
    // root->left->right = new Node(5);


    root->right = new Node(6);
    root->right->left = new Node(2);
    root->right->right = new Node(4) ;
    root->right->right->left = new Node(3) ;



    int n = height(root);
    for (int i = 0; i < n; i++)
    {
        knode(root, i);
    }

    cout << endl;

    return 0;
}
