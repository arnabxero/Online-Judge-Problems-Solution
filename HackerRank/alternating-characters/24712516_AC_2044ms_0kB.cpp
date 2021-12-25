#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t;

    cin>>t;

    char ch[100005];

    while(t--)
    {
        cin>>ch;

        int n = strlen(ch), i, r = 0;
        char c = ch[0];

        for(i=1; i<n; i++)
        {
            if(c==ch[i])
            {
                r++;
            }
            else
            {
                c = ch[i];
            }
        }
        cout<<r<<endl;
    }
}
