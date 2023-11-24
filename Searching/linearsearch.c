#include <stdio.h>
int main()
{
    int i, arr[20], n, target = 0;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    printf("Enter the values in the array:");
    {
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
    }
    printf("Enter the value to be searched:");
    scanf("%d", &target);
    // Searching
    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            printf("Value %d found at index %d \n", target, i);
            break;
        }
    }
        printf("Value %d not found \n", target);
   return 0;
}