#include<bits/stdc++.h>

using namespace std;

int main ()
{
    long long int a, b, i, c = 0;

    cin>>a>>b;

    for(i=a; i<=b; i++)
    {
        if(i%2==1)
            c+=i;
    }

    cout<<c<<endl;
}
