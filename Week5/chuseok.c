// chuseok.c
#include <stdio.h>

void print_calender(int);

int main()
{
    int short_mth = 2, mid_mth_1 = 9, mid_mth_2 = 4, mid_mth_3 = 6, mid_mth_4 = 11;
    int chuseok_month = 10;
    int chuseok = 6;
    int this_mth = 9;
    int today = 30;

    // 1. 조건문
    if(this_mth == chuseok_month)
    {
        printf("Chuseok is coming!\n");
    }
    else
    {
        printf("No Chuseok yet,,,\n");
    }

    // 2. 반복문
    for(int i = today; i < 31; i++)
    {
        printf("Today is %d월 %d일!\n", this_mth, today);
    }

    // 달력 출력하기
    print_calender(this_mth);



    return 0;
}

void print_calender(int this_mth)
{
    int short_mth = 2, mid_mth_1 = 9, mid_mth_2 = 4, mid_mth_3 = 6, mid_mth_4 = 11, days;

    switch(this_mth)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31; break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30; break;
        case 2:
            days = 28; break;
        default:
            printf("That's not a month!\n");
            return ;
    }

    printf("\n*** %d월 ***\n", this_mth);
    int cols = 7;
    int rows = days / cols;
    for(int i = 1; i <= days; i++)
    {
        printf("%d\t", i);

        if(i % 7 == 0)
        {
            printf("\n");
        }
    }
        printf("\n");
 }
