#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;

    cin>>n;

    int arr[n+1], sum = 0;

    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    int mid = sum/2;

    i = 1;
    int ac = 0;

    while((ac+arr[i])<=mid)
    {
        ac+=arr[i];
        i++;
    }

    i--;

    int alice = i;

    i = n;
    int bb = 0;
    int bbc = 0;

    while((bb+arr[i])<=mid)
    {
        bb+=arr[i];
        i--;
        bbc++;
    }

    i++;

    int bob = bbc;

    //cout<<alice<<" "<<bob<<endl;

    //cout<<ac<<" "<<bb;

    if(ac==bb)
    {
        alice+=1;
        bob-=1;
    }
    else if(ac>bb)
    {
        bob+=1;
    }
    else if(bb>ac)
    {
        alice+=1;
    }

    if(alice<0)
        alice = 0;
    if(bob<0)
        bob = 0;

    cout<<alice<<" "<<bob<<endl;

    //cout<<i<<" "<<n-i;
    //cout<<i<<" "<<n-1<<endl;
}