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

struct myType{
    Node *nod;
    int x;
    myType(Node *n,int i)
    {
        nod = n;
        x = i;
    }
};

void lot(Node *root) {

    if (root == NULL) {
        return;
    }

    queue<myType> q;
    q.push(myType(root, 1));
    while (!q.empty())
    {
        Node *temp = q.front().nod;
        int newline = q.front().x;
        q.pop();
        cout << temp->key << " ";
        if (newline == 1) {
            cout << endl;
        }

        if (temp->left != NULL && temp->right == NULL) {
            q.push(myType(temp->left, 1));
        }
        if (temp->right != NULL && temp->left == NULL) {
            q.push(myType(temp->right, 1));
        }
        if (temp->left != NULL && temp->right != NULL) {
            q.push(myType(temp->left, 0));
            q.push(myType(temp->right, 1));
        }
    }
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
    root->right->left = new Node(60);
    root->right->right->left = new Node(80);
    root->right->right->right = new Node(90);

    // root->left = new Node(20);
    // root->right = new Node(30);
    // root->left->left = new Node(8);
    // root->left->right = new Node(7);
    // root->left->right->left = new Node(9);
    // root->left->right->right = new Node(15);
    // root->right->right = new Node(6);

    // root->left=new Node(4);
    // root->left->right = new Node(5);

    // root->right = new Node(6);
    // root->right->left = new Node(2);
    // root->right->right = new Node(4);
    // root->right->right->left = new Node(3);

    lot(root);

    return 0;
}