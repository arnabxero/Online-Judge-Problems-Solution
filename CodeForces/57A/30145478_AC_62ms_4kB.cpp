#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, rslt, x1, x2, y1, y2;

    cin>>n;
    cin>>x1>>y1>>x2>>y2;

    int a = abs(x2-x1);
    int b = abs(y2-y1);

    if(b==n || a==n)
        rslt = x1 + x2 + y1 + y2;
    else
        rslt = a+b;

    cout<<min(rslt,4*n-rslt);
}
