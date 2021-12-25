#include<bits/stdc++.h>

using namespace std;

int main ()
{
    unsigned long long int n;

    cin>>n;

    n = n%6;

    if(n==0 || n==1 || n==3)
        cout<<"yes"<<endl;

    else cout<<"no"<<endl;
}
