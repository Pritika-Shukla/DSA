#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left ,*right;
};
//To create a new node
struct node *createnode(int value ){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return(newnode);
}

/*function to traverse the nodes of binary tree in preorder*/  
void Preorder(struct node *root)
{
    if(root==NULL){
        return;
    }
    else{
        printf("%d",root->data);
        Preorder(root->left);  
        Preorder(root->right);  
    }
}
/*function to traverse the nodes of binary tree in Inorder*/  
void Inorder(struct node *root)
{
    if(root==NULL){
        return;
    }
    else{
        Inorder(root->left); 
        printf("%d",root->data);
        Inorder(root->right);  
    }
}
/*function to traverse the nodes of binary tree in Postorder*/  
void Postorder(struct node *root)
{
    if(root==NULL){
        return;
    }
    else{
        Postorder(root->left); 
     Postorder(root->right);
        printf("%d",root->data);
    }
}
int main()  
{  
    struct node *root = createnode(36);  
    root->left = createnode(26);  
    root->right = createnode(46);  
    root->left->left = createnode(21);  
    root->left->right = createnode(31);  
    root->left->left->left = createnode(11);  
    root->left->left->right = createnode(24);  
    root->right->left = createnode(41);  
    root->right->right = createnode(56);  
    root->right->right->left = createnode(51);  
    root->right->right->right = createnode(66);  
  
    printf("\n The Preorder traversal of given binary tree is -\n");  
    Preorder(root);  
      
    printf("\n The Inorder traversal of given binary tree is -\n");  
Inorder(root);  
      
    printf("\n The Postorder traversal of given binary tree is -\n");  
  Postorder(root);  
  
    return 0;  
}    