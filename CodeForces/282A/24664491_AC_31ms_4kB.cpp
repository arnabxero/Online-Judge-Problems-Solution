#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t, i;

    cin>>t;

    int x = 0;
    char ch[5];

    for(i=0; i<t; i++)
    {
        cin>>ch;

        if(ch[1]=='+')
            x++;

        else if(ch[1]=='-')
            x--;
    }

    cout<<x<<endl;
}
