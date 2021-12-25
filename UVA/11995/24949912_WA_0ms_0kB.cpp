#include<bits/stdc++.h>

using namespace std;

int que(int arr[], int brr[], int n)
{
    int i;
    int r = 1;

    for(i=0; i<n; i++)
    {
        if(arr[i]!=brr[i])
        {
            r = 0;
            break;
        }
    }
    return r;
}

int stck(int arr[], int brr[], int n)
{
    int i, r = 1;

    for(i=0; i<n; i++)
    {
        if(arr[i]!=brr[n-1-i])
        {
            r = 0;
            break;
        }
    }
    return r;
}

int imp(int arr[], int brr[], int n, int m)
{
    int i, j, r = 0, x = 0;

    for(i=0; i<n; i++)
    {
        x = 0;

        for(j=0; j<m; j++)
        {
            if(brr[i]==arr[j])
            {
                x = 1;
                break;
            }
        }
        if(x==0)
        {
            r = 1;
            break;
        }
    }
    return r;
}

int pq(int arr[], int brr[], int n)
{
    int i, r = 1;

    for(i=0; i<n-1; i++)
    {
        if(brr[i]<brr[i+1])
        {
            r = 0;
            break;
        }
    }
    return r;
}

int main ()
{
    int n;

    while(scanf("%d", &n)!=EOF)
    {
        int arr[n];
        int brr[n];
        int i, x, y, a = 0, b = 0;

        for(i=0; i<n; i++)
        {
            scanf("%d %d", &x, &y);

            if(x==1)
                arr[a++] = y;
            else
                brr[b++] = y;
        }

        //cout<<a<<" "<<b<<endl;

        //imp(arr, brr, len, a);

        int len = b;

        if(imp(arr, brr, len, a)==1)
            cout<<"impossible"<<endl;

        else
        {
            int stk = stck(arr, brr, len);

            int q = que(arr, brr, len);

            int p = pq(arr, brr, len);

            if(stk==1 && q == 0 && p == 0)
                cout<<"stack"<<endl;

            else if(stk==0 && q == 1 && p == 0)
                cout<<"queue"<<endl;

            else if(stk==0 && q == 0 && p == 1)
                cout<<"priority queue"<<endl;

            else cout<<"not sure"<<endl;
        }
    }


}
