// gugudan.c
#include <stdio.h>

void dan(int);

int main()
{
    for(int dan = 1; dan <= 9; dan++)
    {
        printf("*** %d dan : ***\n", dan);
        // dan(d);
        for(int d = 1; d <= 9; d++)
        {
            printf("%d * %d = %d\n", dan, d, dan * d);
        }        
        printf("\n");
    }
    return 0;
}

void dan(int step)
{
    for(int i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", step, i, step * i);
    }
}