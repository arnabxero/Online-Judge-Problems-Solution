#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, i;

    cin>>n;

    int arr[n+1];

    int alice = 0, bob = 0;

    int alc = 0, bbc = 0;

    for(i=1; i<=n; i ++)
        cin>>arr[i];

    int ac = 0;

    int bb = n;

    while(n --)
    {
        if(alc<=bbc)
        {
            ac++;

            alc += arr[ac];

            alice++;
        }

        else if(alc>bbc)
        {
            bbc+=arr[bb];

            bb--;

            bob++;
        }
    }

    cout<<alice<<' '<<bob<<endl;
}
