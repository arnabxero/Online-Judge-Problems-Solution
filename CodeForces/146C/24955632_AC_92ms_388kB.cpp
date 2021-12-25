#include<bits/stdc++.h>
//arnab
using namespace std;

int main ()
{
    string a, b;

    cin>>a>>b;

    int i, x = 0, y = 0;

    int len = a.length();

    for(i=0; i<len; i++)
    {
        if(a[i] == '7' && b[i] == '4')
            x++;
        if(a[i] == '4' && b[i] == '7')
            y++;
    }

    int mx = max(x, y);

    cout<<mx<<endl;
}