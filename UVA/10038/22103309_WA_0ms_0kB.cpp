#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n, i, abd1, abd2, m;
    while(scanf("%d", &n)==1)
    {
        int a[n];
        m = 1;
        scanf("%d", &a[0]);

        for(int i=1; i<n; i++)
            scanf("%d", &a[i]);

        for(i=0; i<n-3; i++)
        {
            abd1 = abs((a[i]-a[i+1]));
            abd2 = abs((a[i+1])-a[i+2]);

            if(abs(abd1-abd2)!=1)
            {
                m = 0;
                break;
            }
        }
        if(m==1)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }

    return 0;

}
