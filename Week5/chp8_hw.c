// chp8_hw.c

#include <stdio.h>

int q1()
{
    int result = -5;
    if(result < 0)
    {
        result = result * -1;
    }
    return result;
}
int q2()
{
    int result = -5;
    result = result < 0 ? result * -1 : result;
    return result;
}
int q3()
{
    int result = 5;
    switch(result)
    {
        case 6:
            result = 0;
            break;
        case 5:
            result = 1;
        case 4:
            result = result * 10;
            break;
    }
    return result;
}

int main()
{
    // Q1
    printf("Q1 : %d\n", q1());

    // Q2
    printf("Q2 : %d\n", q2());

    // Q3
    printf("Q3 : %d\n", q3());
    
    
    return 0;
}