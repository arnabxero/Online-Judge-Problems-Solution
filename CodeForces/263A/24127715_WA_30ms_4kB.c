#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int arr[5][5], i, j, i_v, j_v;

    for(i=0; i<5; i++)
        for(j=0; j<5; j++)
        {
            scanf("%d", &arr[i][j]);

            if(arr[i][j]==1)
            {
                i_v = i;
                j_v = j;
            }
        }
    printf("%d", abs(j_v-i_v));
}
