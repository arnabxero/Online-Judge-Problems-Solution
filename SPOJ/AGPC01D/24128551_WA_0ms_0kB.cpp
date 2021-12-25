#include<stdio.h>

int main ()
{
    int t, i;
    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        int n, m, j, k;
        scanf("%d %d", &n, &m);

        int arr[m] = {0};

        char ar1[n], ar2[m];

        scanf(" %s %s", ar1, ar2);

        for(j=0; j<m; j++)
            for(k=0; k<n; k++)
            {
                if(ar2[j]==ar1[k])
                {
                    arr[j]+=1;
                    ar1[k] = '+';
                }

            }
        int min_c = arr[0];

        for(j=1; j<m; j++)
        {
            if(arr[j]<min_c)
                min_c = arr[j];
        }

        printf("%d\n", min_c);
    }
}
