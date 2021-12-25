#include<bits/stdc++.h>

using namespace std;
//arnab
int base_conv(int n, int base)
{
    int r = 0, temp, i = 0;

    while(n>0)
    {
        temp = (n%10)*(pow(base, i));
        n/=10;
        i++;
        r+=temp;
    }
    return r;
}

int base_finder(int n)
{
    int tmp, i, mx = n%10;

    while(n>0)
    {
        if(n%10>mx)
            mx = n%10;

        n/=10;
    }
    return mx+1;
}

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int x, y, i;

        cin>>x>>y;

        int base_x = base_finder(x);

        int base_y = base_finder(y);

        int x_10 = base_conv(x, base_x);

        int y_10 = base_conv(y, base_y);

        int result = x_10+y_10;

        cout<<result<<endl;
        //cout<<base_finder(x);
    }
}