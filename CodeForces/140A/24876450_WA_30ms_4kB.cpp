#include<bits/stdc++.h>
#define pi acos(-1)

using namespace std;

int main()
{
    double n, tr, pr;

    cin>>n>>tr>>pr;

    double new_r = tr-pr;

    double new_dmr = pr/new_r;

    if(asin(new_dmr)*n<=pi)
        cout<<"YES"<<endl;

    else cout<<"NO"<<endl;
}

