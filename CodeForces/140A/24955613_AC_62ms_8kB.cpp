#include<bits/stdc++.h>
#define pi 3.1415927
//arnab
using namespace std;

int main()
{
    double n, tr, pr;

    cin>>n>>tr>>pr;

    double new_r = tr-pr;

    double new_dmr = pr/new_r;

    if((n==1 && pr*n<=tr) || (n==2 && pr*n<=tr) || (asin(new_dmr)*n<=pi))
        cout<<"YES"<<endl;

    else cout<<"NO"<<endl;
}