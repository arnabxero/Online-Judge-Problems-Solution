#include<stdio.h>
int main()
{

    int n, t, j, i, k, temp;
    int arr[200];
    scanf("%d", &t);

    for(k=1; k<=t; k++)
    {
        arr[0]=1;
        scanf("%d", &n);

        for(j=0; n>=2; n--)
        {
            temp=0;

            for(i=0; i<=j; i++)
            {
                temp=(arr[i]*n)+temp;
                arr[i]=temp%10;
                temp=temp/10;
            }

            while(temp>0)
            {
                arr[++j]=temp%10;
                temp=temp/10;
            }
        }

        for(int i=j; i>=0; i--)
            printf("%d",arr[i]);
        printf("\n");
    }

    return 0;

}
