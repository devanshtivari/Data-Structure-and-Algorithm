#include<iostream>
#include<queue>
using namespace std;

/*
                ALGORITHM
    1. Push first element of the tree(root) and a NULL into the queue
    2. Here NULL denotes the end of the level or the end of tree
    3. If q.front() contains left and right child then push those children into queue along with a NULL denoting the end
    4. Pop q.front()
    5. If q.front() == NULL and queue is empty 
                                 It means the tree has ended
        If q.front() == NULL and queue is not empty
                                 It means a level has ended
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

void LevelOrder(Node* root)
{
    if(root == NULL){   //if empty
        return;
    }
    queue<Node*> q1;
    q1.push(root);  //storing first element
    q1.push(NULL);
    while(!q1.empty()){
        Node* temp = q1.front();           //storing first element of queue in temporary node
        q1.pop();
        if(temp != NULL){
            cout<<temp->data<<" ";          //printing data
            if(temp->left)                               //if it has children
                q1.push(temp->left);
            if(temp->right)
                q1.push(temp->right);
        }
        else{
            if(!q1.empty()){
                cout<<"\nA level has ended\n";
                q1.push(NULL);
            }
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
    /*
                        1
                      /   \
                    2      3
                  /   \   /  \
                 4     5 6    7
    */
    LevelOrder(root);
}

