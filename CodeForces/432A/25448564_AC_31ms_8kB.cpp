#include<bits/stdc++.h>

using namespace std;
//hello
int main()
{
    int n, k, i;

    cin>>n>>k;

    int x;

    int ck = 5-k;

    //cout<<"CK IS "<<ck<<endl;

    int c = 0;

    for(i=0; i<n; i++)
    {
        cin>>x;

        if(x<=ck)
        {
           // cout<<"x is "<<x<<" ck is "<<ck<<endl;
            c++;
        }
    }

    cout<<c/3<<endl;
   // cout<<"C is"<<c<<endl;
}