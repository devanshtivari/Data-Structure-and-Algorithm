#include<iostream>
using namespace std;

//Inorder : L+R

class Node
{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

void inorder(Node* &root)
{
    if(root != NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    /*
                        1
                      /   \
                    2      3
                  /   \   /  \
                 4     5 6    7
    */
    cout<<"In-order of binary tree is : ";
    inorder(root);
}
