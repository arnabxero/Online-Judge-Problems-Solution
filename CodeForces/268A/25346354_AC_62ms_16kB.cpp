#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;

    cin>>n;

    int h[n], a[n];

    for(i=0; i<n; i++)
        cin>>h[i]>>a[i];

    int j, rslt = 0;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(h[i]==a[j] && i!=j)
            {
                rslt++;
            }
        }
    }

    cout<<rslt<<endl;
}
