#include<bits/stdc++.h>

using namespace std;

int main()
{
    int p, i, arr[9];

    cin>>p;

    for(i=0; i<7; i++)
    {
        cin>>arr[i];
    }
    i = 0;
    while(p>0)
    {
        p-=arr[i];

        if(p<=0)
        {
            cout<<i+1;
            break;
        }
        i++;

        if(i==7)
            i=0;
    }
}

