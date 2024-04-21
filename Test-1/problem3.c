#include <stdio.h>

void reverseArray(int A[], int n)
{
    int temp, start = 0, end = n - 1;

    while (start < end)
    {
        temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int n, i;

    scanf("%d", &n);

    int A[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    reverseArray(A, n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}