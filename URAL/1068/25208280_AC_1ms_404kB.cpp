#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>0)
        cout<<(1+n)*n/2<<endl;
    else
        cout<<(1-n)*n/2+1<<endl;
    return 0;
}
