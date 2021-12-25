#include <stdio.h>
//Hello World
int a[5];
int main()
{
    int t,rslt,i,j,tmp;

    scanf("%d",&t);

    while(t--)
    {
        rslt=0;

        for(i=1; i<=3; i++)
            scanf("%d",&a[i]);

        for(i=1; i<=3; i++)
            if(a[i])
                a[i]--,rslt++;

        for(i=1; i<=3; i++)
            for(j=i+1; j<=3; j++)
                if(a[i]<a[j])
                    tmp=a[i],a[i]=a[j],a[j]=tmp;

        if(a[1]&&a[2])
            a[1]--,a[2]--,rslt++;

        if(a[1]&&a[3])
            a[1]--,a[3]--,rslt++;

        if(a[2]&&a[3])
            a[2]--,a[3]--,rslt++;

        if(a[1]&&a[2]&&a[3])
            rslt++;

        printf("%d\n",rslt);
    }

    return 0;
}
