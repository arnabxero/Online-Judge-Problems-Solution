#include<bits/stdc++.h>

#define pi 2*acos(0.0)

using namespace std;

int main()
{
    int t, i;

    cin>>t;

    for(i=1; i<=t; i++)
    {
        double r;

        cin>>r;

        double x = r*2;

        double area_c = pi*r*r;

        double area_s = x*x;

        printf("Case %d: %.2lf\n", i, area_s-area_c);
    }
}
