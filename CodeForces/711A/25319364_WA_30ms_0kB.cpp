#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j;

    bool r = false;

    cin>>n;

    char ch[n][6];

    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>ch[i][j];
        }
    }

    for(i=0; i<n; i++)
    {
        if(ch[i][0] == 'O' && ch[i][1] == 'O')
        {
            r = true;
            ch[i][0] = '+';
            ch[i][1] = '+';
            break;
        }

        if(ch[i][3] == 'O' && ch[i][4] == 'O')
        {
            r = true;
            ch[i][3] = '+';
            ch[i][4] = '+';
            break;
        }
    }

    if(r)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            cout<<ch[i][j];
        }
        cout<<endl;
    }
}
