#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int n;

    cin>>n;

    int i, j, odd[n], even[n], x = 0, y = 0;

    if(n<4)
    {
        if(n==1)
            cout<<1<<"\n"<<1<<endl;
        if(n==2)
            cout<<1<<"\n"<<1<<endl;
        if(n==3)
            cout<<1<<"\n"<<1<<" "<<3<<endl;
        return 0;

    }
    if(n%2==0)
        cout<<n<<endl;

    else
        cout<<n-1<<endl, n = n-1;

    for(i=1; i<=n; i++)
    {
        if(i%2==0)
            even[x++] = i;
        else
            odd[y++] = i;
    }

    for(i=0; i<x; i++)
    {
        cout<<even[i]<<" ";
    }
    for(i=0; i<y; i++)
        cout<<odd[i]<<" ";


}
