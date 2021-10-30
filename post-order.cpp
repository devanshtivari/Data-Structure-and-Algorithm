#include<iostream>
using namespace std;

//Postorder : LR+

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

void postorder(Node* &root)
{
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
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
    cout<<"Post-order of binary tree is : ";
    postorder(root);
}
