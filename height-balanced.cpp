#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* left;
  Node* right;
  Node(int val){
    data=val;
    left=NULL;
    right=NULL;
  }
};

int height(Node* root)
{
    if(root == NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh)+1;
}

bool isBalanced(Node* root)
{
    if(root == NULL){
        return true;
    }
    if(isBalanced(root->left) == false){
        return false;
    }
    if(isBalanced(root->right) == false){
        return false;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh - rh) <= 1){
        return true;
    }
    else{
        return false;
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
    cout<<"Tree is balanced : "<<isBalanced(root);
  
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7); 
    root->right->right->right = new Node(8);
    root->right->right->right->right = new Node(9);
     /*
                        1
                      /   \
                    2      3
                  /   \   /  \
                 4     5 6    7
                                \
                                 8
                                  \
                                    9
    */
    cout<<"Tree is balanced : "<<isBalanced(root);
}
