#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void inordertraversal(struct Node *node)
{
    if (node == NULL)
    {
        return;
    }
    inordertraversal(node->left);
    cout << node->data << " -> ";
    inordertraversal(node->right);
}

int main()
{
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    inordertraversal(root);
    return 0;
}