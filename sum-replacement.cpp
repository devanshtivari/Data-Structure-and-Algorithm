#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* left;
  Node* right;
  Node(int val){
    data = val;
    left = NULL;
    right = NULL;
  }
};

void sumOfNode(Node* root){
  if(root == NULL){
    return;
  }
  sumOfNode(root->left);
  sumOfNode(root->right);
  if(root->left != NULL){
    root->left += root->left->data;
  }
  if(root->right != NULL){
    root->right = root->right->data;
  }
}

void preOrder(Node* root){
  if(root == NULL){
    return;
  }
  cout<<root->data<<" ";
  preOrder(root->left);
  preOrder(root-<right);
}

int main(){
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
    cout<<"The preorder is : ";
    preorder(root);
    sumOfNode(root);
    cout<<"The preorder after sum is : ";
    preorder(root);
}
