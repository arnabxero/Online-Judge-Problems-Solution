#include<bits/stdc++.h>
//#include<vector>

using namespace std;

struct db
{
    int n;
    int c = 0;
};

int main ()
{
    int arr[100000];
    int i = 0, j = 0, k = -1, x;

    while(scanf("%d", &x)!=EOF)
        arr[i++] = x;

    /*for(j=0; j<i; j++)
        cout<<arr[j]<<endl;*/

    sort(arr, arr+i);

    struct db ck[i];
    int n = i;

    for(j=0; j<n; j++)
    {
        if(ck[k].n!=arr[j])
        {
            k++;
            ck[k].n = arr[j];
        }
        if(ck[k].n == arr[j])
        {
            ck[k].c++;
        }
    }

    for(i=0; i<=k; i++)
    {
        printf("%d %d\n", ck[i].n, ck[i].c);
    }

}
