#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int value)
{
    if (root == NULL)
        return new Node(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

Node* deleteNode(Node* root, int target)
{
    if (root == NULL)
        return NULL;

    if (target < root->data)
    {
        root->left = deleteNode(root->left, target);
    }
    else if (target > root->data)
    {
        root->right = deleteNode(root->right, target);
    }
    else
    {
        // Only Left Child
        if (root->left != NULL && root->right == NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Only Right Child
        if (root->left == NULL && root->right != NULL)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        cout << "Node cannot be deleted (it has 0 or 2 children)." << endl;
    }

    return root;
}

void inorder(Node* root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    Node* root = NULL;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 60);   // 70 has only one left child
    root = insert(root, 20);
    root = insert(root, 40);

    cout << "Before Deletion: ";
    inorder(root);

    root = deleteNode(root, 70);

    cout << "\nAfter Deletion: ";
    inorder(root);

    return 0;
}