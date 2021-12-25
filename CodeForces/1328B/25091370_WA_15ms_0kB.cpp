#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int x, y;

        cin>>x>>y;

        char ch[x];
        int i;

        for(i=0; i<x; i++)
            ch[i] = 'a';

        for(i=(x-2); i>=0; i--)
        {

            if(y<=((x-1)-i))
            {
                ch[x-y] = 'b';
                ch[i] = 'b';
                break;
            }
            y = y-((x-1)-i);
        }
        cout<<ch<<endl;
    }
}
