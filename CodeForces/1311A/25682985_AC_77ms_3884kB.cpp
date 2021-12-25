#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int a, b, c = 0;

        cin>>a>>b;

        if(a==b)
            c = 0;

        else if(a<b && b%2==1 && a%2==1)
            c = 2;

        else if(a<b && b%2==1 && a%2==0)
            c = 1;

        else if(a<b && b%2==0 && a%2==1)
            c = 1;

        else if(a<b && b%2==0 && a%2==0)
            c = 2;

        else if(a>b && b%2==1 && a%2==1)
            c = 1;

        else if(a>b && b%2==1 && a%2==0)
            c = 2;

        else if(a>b && b%2==0 && a%2==1)
            c = 2;

        else if(a>b && b%2==0 && a%2==0)
            c = 1;


        cout<<c<<endl;
    }
}

