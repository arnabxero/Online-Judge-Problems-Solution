#include<bits/stdc++.h>

//arnab
using namespace std;

int main()
{
    int arr[12]={4,7,47,74,44,444,447,474,477,777,774,744};

    int n, i, r = 0;

    cin>>n;

    for(i=0; i<12; i++)
        if(n%arr[i]==0)
    {
        r = 1;
        break;
    }

    if(r==1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}