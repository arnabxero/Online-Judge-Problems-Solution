#include<bits/stdc++.h>

using namespace std;
//A
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, rslt, z, a, i, j;

    cin>>n;

    while(n!=(-1))
    {
        rslt = 0;

        z = sqrt(n);
        z++;

        for(i=z; i>=2; i--)
        {
            a = n;

            j = 0;

            while(j<i && a%i==1)
            {
                a-= a/i+1;
                j++;
            }
            if(a%i==0 && j==i)
            {
                rslt = 1;
                break;
            }
        }
        if(rslt==1)
            printf("%d coconuts, %d people and 1 monkey\n", n ,i);

        else
            printf("%d coconuts, no solution\n", n);

            cin>>n;

    }
}