#include<stdio.h>
void main(){
int row,col,count=0,i,j,arr[10][10];
printf("Enter the number of rows");
scanf("%d",&row);
printf("Enter the number of columns");
scanf("%d",&col);
printf("Enter the elements in the matrix");
for(i=0;i<row;i++){
for(j=0;j<col;j++){
scanf("%d",&arr[i][j]);
}
}
for(i=0;i<row;i++){
for(j=0;j<col;j++){
if(arr[i][j]==0)
count++;
}
}
if(count>((row*col)/2))
printf("Sparse Matrix ");
else
printf("Not a sparse matrix");
}