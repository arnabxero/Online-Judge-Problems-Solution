#include<stdio.h>
int main ()
{
    int m, d, count;

    scanf("%d %d", &m, &d);

    while(m!=0 && d!=0)
    {
        if(m==1)
            count = 0 + d;
        else if(m==2)
            count = 31 + d;
        else if(m==3)
            count = 31 + 29 + d;
        else if(m==4)
            count = 31 + 29 + 31 + d;
        else if(m==5)
            count = 31 + 29 + 31 + 30 + d;
        else if(m==6)
            count = 31 + 29 + 31 + 30 + 31 + d;
        else if(m==7)
            count = 31 + 29 + 31 + 30 + 31 + 30 + d;
        else if(m==8)
            count = 31 + 29 + 31 + 30 + 31 + 30 + 31 + d;
        else if(m==9)
            count = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + d;
        else if(m==10)
            count = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d;
        else if(m==11)
            count = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d;
        else if(m==12)
            count = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;

        count %= 7;

        if(count == 1)
            printf("Thursday\n");
        else if(count == 2)
            printf("Friday\n");
        else if(count == 3)
            printf("Saturday\n");
        else if(count == 4)
            printf("Sunday\n");
        else if(count == 5)
            printf("Monday\n");
        else if(count == 6)
            printf("Tuesday\n");
        else if(count == 0)
            printf("Wednesday\n");

        scanf("%d %d", &m, &d);
    }
    
    return 0;
}