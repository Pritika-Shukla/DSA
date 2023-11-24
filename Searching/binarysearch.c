#include <stdio.h>

int binarySearch(int arr[], int n, int data)
{
    int l = 0, r = n - 1, mid;

    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (arr[mid] == data)
        {
            return mid; // Element found, return the index
        }
        else if (arr[mid] < data)
        {
            l = mid + 1; // Search in the right half
        }
        else
        {
            r = mid - 1; // Search in the left half
        }
    }

    return -1; // Element not found
}

int main()
{
    int n, data, result;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the data in the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the data to be searched: ");
    scanf("%d", &data);

    // Perform binary search
    result = binarySearch(arr, n, data);

    // Display the result
    if (result != -1)
    {
        printf("Data %d found at index %d.\n", data, result);
    }
    else
    {
        printf("Data %d not found in the array.\n", data);
    }

    return 0;
}
