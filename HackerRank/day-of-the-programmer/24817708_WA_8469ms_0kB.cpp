#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int n, d, m, y, c = 0;

    cin>>n;

    if(n<1918)
    {
        if(n%4==0)
            c = 1;

        d = 13;
        d-=c;
        m = 9;
        y = n;
    }
    else if(n>1918)
    {
        if(n%400==0 || (n%4==0 && n%100!=0))
            c = 1;

        d = 13;
        d-=c;
        m = 9;
        y = n;
    }
    else
    {
        d = 28;
        m = 9;
        y = n;
    }

    printf("%d.%d.%d\n", d, m, y);
}
