#include <stdio.h>

int main()
{
    int n, i, count = 0, current_end_time = 0;

    printf("Enter the number of movies (n): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        int start, end;
        printf("Enter start and end time for movie %d (separated by space): ", i + 1);
        scanf("%d %d", &start, &end);

        if (start >= current_end_time)
        {
            count++;
            current_end_time = end;
        }
    }

    printf("The maximum number of movies you can watch entirely is: %d\n", count);

    return 0;
}
