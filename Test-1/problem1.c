#include <stdio.h>

int main()
{
    int n, i, Key;
    scanf("%d", &n);
    int nums[n - 1];

    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &nums[i]);
    }
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (i = 0; i < n - 1; i++)
    {
        sum += nums[i];
    }

    Key = total - sum;

    printf("The Missing number is: %d\n", Key);
    return 0;
}
