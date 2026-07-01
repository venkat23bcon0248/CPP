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


Node* insert(Node* root, int data)
{
    if (root == NULL)
    {
        return new Node(data);
    }

    if (data < root->value)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }

    return root;
}


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
    Node* root = NULL;

    int n;

    cout << "Enter number of nodes: ";
    cin >> n;


    for (int i = 0; i < n; i++)
    {
        int value;

        cout << "Enter value: ";
        cin >> value;

        root = insert(root, value);
    }


    cout << "\nBST Created Successfully!\n";

    cout << "Inorder Traversal: ";

    inorder(root);

    cout << endl;

    return 0;
}


