#include<stdio.h>

void p_op(int *p, int n)
{
    int x, y, temp;

    scanf("%d %d", &x, &y);

    temp = p[x];
    p[x] = p[y];
    p[y] = temp;
}

void s_op(int *p, int n)
{
    int i, x;
    scanf("%d", &x);

    for(i=0; i<n; i++)
        p[i] = p[i]+x;
}

void m_op(int *p, int n)
{
    int i, x;
    scanf("%d", &x);

    for(i=0; i<n; i++)
        p[i] = p[i]*x;

}

void d_op(int *p, int n)
{
    int i, x;
    scanf("%d", &x);

    for(i=0; i<n; i++)
        p[i] = p[i]/x;

}

void r_op(int *p, int n)
{
    int arr2[n], i, j;

    for(i=0; i<n; i++)
    {
        arr2[i] = p[i];
    }
    j = n-1;

    for(i=0; i<n; i++)
    {
        p[i] = arr2[j];
        j--;
    }
}

int main()
{
    int cs, l;
    scanf("%d", &cs);

    for(l=0; l<cs; l++)
    {
        int n, m, j;
        scanf("%d %d", &n, &m);
        int arr[n];

        for(j=0; j<n; j++)
            scanf("%d", &arr[j]);

        for(j=0; j<m; j++)
        {
            char ch;
            scanf(" %c", &ch);

            if(ch=='P')
                p_op(arr, n);
            if(ch=='S')
                s_op(arr, n);
            if(ch=='M')
                m_op(arr, n);
            if(ch=='D')
                d_op(arr, n);
            if(ch=='R')
                r_op(arr, n);
        }

        //printf("Case %d:\n", l+1);

        /*for(j=0; j<n; j++)
            printf("%d ", arr[j]);
        printf("\n");*/

        printf("Case %d:\n", l+1);
        for (int j = 0; j < n; j++)
        {
			printf("%d", arr[j]);
			if(j != n-1)
            {
				printf(" ");
			}

			else
            {
				printf("\n");
			}
        }
    }

}
