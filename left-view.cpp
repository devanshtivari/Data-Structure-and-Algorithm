#include<iostream>
#include<queue>
using namespace std;

/*
                ALGORITHM
    1. We have to perform level order traversal in binary tree.
    2. Left most node is the node at the starting of the level in that queue
    3. Print that node.
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

void LeftView(Node* head)
{
    queue<Node*> q1;
    q1.push(head);
    while(!q1.empty()){
        int n = q1.size();    //determining the size to find the first element
        for(int i=0 ; i<n ; i++){
            Node* temp = q1.front();
            q1.pop();
            if(i == 0)          //finding first element in level and printing it
                cout<<temp->data<<" ";

            if(temp->left != NULL)
                q1.push(temp->left);   //pushing other nodes in binary tree
            if(temp->right != NULL)
                q1.push(temp->right);
        }
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
    root->right->right->left = new Node(8);
    root->left->left->left = new Node(9);
    /*
                        1
                      /   \
                     2     3
                   /  \   /  \
                  4    5 6    7
                 /           /
                9           8
    */
    LeftView(root);
}
