#include <iostream>
using namespace std;

// Structure defining a Tree Node
struct Node
{
    int data;
    Node *left;
    Node *right;

    // Constructor
    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Insert a node into the Binary Search Tree
Node *insert(Node *root, int val)
{
    if (root == nullptr)
    {
        return new Node(val);
    }

    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }

    return root;
}

// Inorder Traversal (Left, Root, Right) -> Prints sorted order
void inorder(Node *root)
{
    if (root == nullptr)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Preorder Traversal (Root, Left, Right)
void preorder(Node *root)
{
    if (root == nullptr)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *root)
{
    if (root == nullptr)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = nullptr;

    int values[] = {50, 30, 70, 20, 40, 60, 80};
    for (int val : values)
    {
        root = insert(root, val);
    }

    cout << "Inorder Traversal:   ";
    inorder(root);
    cout << "\n";

    cout << "Preorder Traversal:  ";
    preorder(root);
    cout << "\n";

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << "\n";

    return 0;
}