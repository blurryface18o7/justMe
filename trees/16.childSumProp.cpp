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


bool bchildSum(Node *root) {

    if (root == NULL) {
        return true;
    }
    if (root->left == NULL && root->right == NULL) {
        return true;
    }

    int sum = 0;
    if (root->left != NULL) sum+= root->left->key;
    if(root->right != NULL) sum += root->right->key;

    return (root->key == sum && bchildSum(root->left) && bchildSum(root->right));

}


int ichildSum(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    if (root->left != NULL && root->right != NULL && root->left->key + root->right->key != root->key)
    {
        return 1;
    }

    return ( ichildSum(root->left) + ichildSum(root->right) );
    
}


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


    bool ans = bchildSum(root);

    if (ans == true) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
