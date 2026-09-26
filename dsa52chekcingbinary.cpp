#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *right;
    struct node *left;
};
node * creatnode(int data)
{
    node *n = new node;
    n->data = data;
    n->right = NULL;
    n->left = NULL;
    return n;
}
void preOrder(node * root){
    if(root!=NULL){
        cout<<root->data<<endl;
        preOrder(root->left);
        preOrder(root->right);
    }
}
int isBST(node *root){
    node *prev = NULL;
    if(root!=NULL){
        if (!isBST(root->left))
        {
            return 0;
        } 
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}
int main()
{
    node *p = creatnode(3);
    node *p1 = creatnode(4);
    node *p2 = creatnode(6);
    node *p3 = creatnode(55);
    node *p4 = creatnode(88);
    p->left = p1;
    p->right = p2;
    p->left = p3;
    p->right =p4;

    cout <<"right node is "<<p->right->data<<endl;
    cout <<"root is "<<p->data<<endl;
    cout <<"left node is "<<p->left->data<<endl;
    preOrder(p);

    cout<<isBST(p);
    return 0;
}