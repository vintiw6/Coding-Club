#include <stdio.h>

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int n, d, i;

    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    printf("Enter the number of left rotations (d): ");
    scanf("%d", &d);

    int arr[n];

    printf("Enter %d elements for the array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    if (d == 0 || d == n)
    {
        printf("No rotation needed (d is 0 or equal to n).\n");
    }
    else
    {
        d %= n;
        reverseArray(arr, 0, d - 1);

        reverseArray(arr, d, n - 1);

        reverseArray(arr, 0, n - 1);

        printf("Rotated array: ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
