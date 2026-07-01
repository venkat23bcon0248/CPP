#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* left;
    Node* right;

    Node(int data)
    {
        value = data;
        left = NULL;
        right = NULL;
    }
};


void inorder(Node* root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);

    cout << root->value << " ";

    inorder(root->right);
}


int main()
{
    Node* tree = new Node(10);

    tree->left = new Node(20);
    tree->right = new Node(30);

    tree->left->left = new Node(40);
    tree->left->right = new Node(50);

    tree->right->left = new Node(60);
    tree->right->right = new Node(70);


    cout << "Inorder Traversal: ";

    inorder(tree);

    return 0;
}