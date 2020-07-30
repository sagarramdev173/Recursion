// finding the height of binary tree

#include<iostream>
#define fo(i,n) for(int i=0;i<=n;i++)
using namespace std;
class node
{
    public:
        int data;
        node* right;
        node* left;   
       
};
node* newNode(int data)
{
    node* new_node=new node();
    new_node->data=data;
    new_node->left=NULL;
    new_node->right=NULL;
    return(new_node);
}
int maxDepth(node* root)
{
    if(root==NULL)      //base condition
        return 0;        
    int l=maxDepth(root->left); //hypothesis
    int r=maxDepth(root->right);    //hypothesis
    int res=max(l,r)+1; //induction
    return res;
}

int main(int argc, char const *argv[])
{
    node *root =newNode(1);   
    root->left = newNode(2);  
    root->right = newNode(3);  
    root->left->left = newNode(4);  
    root->left->right = newNode(5);  
    root->left->right->left = newNode(8);      
    cout << "Height of tree is " << maxDepth(root);  
    return 0;
}