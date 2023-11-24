#include<stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
struct node *create();
int main(){
    struct node *root;
    root=create();
    return 0;
}
struct node *create()
{
    int value,choice;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Press 0 to exit\n");
    printf("Press 1 for \n");
    printf("Enter your choice");
    scanf("%d",&choice);
    if(choice==0)
     {
       return 0;
     }
     else
     {
      printf("Enter the data");
      scanf("%d",&value);
      newnode->data=value;
      printf("Enter the left child of %d",value);
      newnode->left=create();
      printf("Enter the right child of %d",value);
      newnode->right=create();
      return newnode;
     }
}