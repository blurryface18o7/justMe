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


int balancedBt(Node *root)
{
    if (root == NULL) {
        return 0;
    }
    int a = 1 + balancedBt(root->left);
    if (a == -1) {
        return -1;
    }
    int b = 1 + balancedBt(root->right);
    if (b == -1) {
        return -1;
    }
    if (abs(a-b) <= 1) {
        return max(a, b);
    } else {
        return -1;
    }
}


// bool balancedBt(Node *root) {
//     return;
// }


int main()
{
    // Node *root = NULL;
    // Node *root = new Node(3);
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
    // root->right->left = new Node(60);
    // root->right->right = new Node(70);
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

    // root->right = new Node(6);
    // root->right->left = new Node(2);
    // root->right->right = new Node(4);
    // root->right->right->left = new Node(3);

    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    // root->right->right = new Node(12);
    // root->right->left->right = new Node(8);

    // Node *root = new Node(3);
    // root->left = new Node(1);
    // root->right = new Node(2);
    // root->right->left = new Node(1);
    // root->right->right = new Node(2);

    // int res = ichildSum(root);

    // if (res == 0) {
    //     cout << "yes" << endl;
    // } else {
    //     cout << "no" << endl;
    // }

    int ans = balancedBt(root);

    if (ans == -1) {
        cout << "no" << endl;
    } else {
        cout << "yes" << endl;
    }

    return 0;
}


