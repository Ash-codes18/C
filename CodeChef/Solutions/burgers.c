#include <stdio.h>

int main()
{
    int t, x, y;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &x, &y);
        if (x > y)
        {
            printf("%d\n", y);
        }
        else
        {
            printf("%d\n", x);
        }
    }

    return 0;
}