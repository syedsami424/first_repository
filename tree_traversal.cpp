#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node {
    int a;
    struct Node *left;
    struct Node *right;
};
Node* newNode(int a){
    Node* temp = new Node;
    temp->a = a;
    temp->left = temp->right = NULL;
    return temp;
}

//inorder
void inorder(struct Node* node){
    if (node == NULL)
        return;
    inorder(node->left);
    cout << node->a << " ";
    inorder(node->right);
}

//preorder
void preorder(struct Node* node)
{
    if (node == NULL){
        return;
    }
    cout << node->a << " ";
    preorder(node->left);
    preorder(node->right);
}

//postorder
void postorder(struct Node* node)
{
    if (node == NULL){
        return;
    }
    postorder(node->left);
    postorder(node->right);
    cout << node->a << " ";
}
int main(){
//change all nodes
    struct Node *root=newNode(3);
    root->left=newNode(1);
    root->right=newNode(4);
    root->left->left=newNode(6);
    root->left->right=newNode(9);
    root->right->left=newNode(2);
    root->right->right=newNode(5);
    root->left->left->left=newNode(7);
    cout << "\nInorder\n";
    inorder(root);
    cout << "\nPreorder\n";
    preorder(root);
    cout << "\nPostorder\n";
    postorder(root);
    cout << "21BCE3439 SYED SAMI AHMED'S WORK.";

}
