#include<iostream>
using namespace std;

/*
                ALGORITHM
    1. Count the number of nodes in left and right subtree recursively
    2. All to 1 to calculate current index
*/

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

int CountNodes(Node* root)
{
    if(root == NULL){
        return 0;
    }
    return CountNodes(root->left)+CountNodes(root->right)+1;
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
    cout<<"Number of nodes are : "<<CountNodes(root);
}

