#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n, i;
    scanf("%d", &n);

    char arr[n+1];

    scanf("%s", arr);
    int len = strlen(arr), l = 0, r = 0;

    for(i=0; i<n; i++)
    {
        if(arr[i]=='L')
            l++;
        if(arr[i]=='R')
            r++;
    }
    int res = l+r+1;

    printf("%d", res);
}
