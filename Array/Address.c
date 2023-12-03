#include<stdio.h>
void main()
{
int elementsize=sizeof(int);
int row=3,col=2;
int base=100;
int arr[4][4];

int rowMajor=base+(row*4+col)*elementsize;
int colMajor=base+(col*4+row)*elementsize;
printf("Address in rowmajor is %d",rowMajor);
printf("\nAddress in colmajor is %d",colMajor);
}