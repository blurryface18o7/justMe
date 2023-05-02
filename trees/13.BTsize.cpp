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

int btsize(Node *root) {
    if (root == NULL) {
        return 0;
    }
    queue<Node*> q;
    int cnt = 0;
    q.push(root);
    while (q.front() != NULL) {
        Node *temp = q.front();
        q.pop();
        cnt++;
        if (temp->left != NULL) {
            q.push(temp->left);
        }
        if (temp->right != NULL) {
            q.push(temp->right);
        }
        if (q.empty() == true && temp->left == NULL && temp->right == NULL) {
            q.push(NULL);
        }
    }
    return cnt;
}

int btsize2(Node *root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + btsize2(root->left) + btsize2(root->right);
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
    root->right->left = new Node(60);
    root->right->right = new Node(70);
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

    cout << btsize(root)<<endl;

    return 0;
}

