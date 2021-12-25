#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t, j;

    cin>>t;

    int ac = 0;

    for(j=1; j<=t; j++)
    {
        int n, i, tmp;
        char ch[7];

        cin>>n;

        printf("Case %d:\n", j);

        for(i=0; i<n; i++)
        {
            cin>>ch;

            if(ch[0]=='d')
            {
                cin>>tmp;
                ac+=tmp;
            }
            else printf("%d\n", ac);
        }
        ac = 0;
    }
}
