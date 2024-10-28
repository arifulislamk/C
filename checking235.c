#include <stdio.h>
int main()
{
    for (int i = 100; i < 300; i++)
    {
        if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0)
        {
            printf("Find result number %d\n", i);
            continue;
        }
        printf("%d in not number \n", i);
    }
    return 0;
}