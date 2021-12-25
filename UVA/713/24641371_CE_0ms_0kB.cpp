#include<bits/stdc++.h>

using namespace std;

int rev(int n)
{
     int r = 0;

     while(n>0)
     {
         r = (r*10)+(n%10);
         n/=10;
     }
     return r;
}

int main ()
{
    int n, j;

    cin>>n;

    for(j=0; j<n; j++)
    {
        int x, y;

        cin>>x>>y;

        x = rev(x);
        y = rev(y);

        int z = x1+y1;

        z = rev(z);

        cout<<z<<endl;
    }
    return 0;
}
