#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t, j;

    cin>>t;

    int ac = 0;

    for(j=1; j<=t; j++)
    {
        int t2, i;

        cin>>t2;

        char ch[t2+1];
        char ch2[7];

        int arr[t2], tmp = 0;

        for(i=0; i<t2; i++)
        {
            cin>>ch2;

            ch[i] = ch2[0];

            if(ch2[0]=='d')
                cin>>tmp;

            ac+=tmp;
            tmp = 0;

            arr[i] = ac;
        }
        printf("Case %d:\n", j);
        for(i=0; i<t2; i++)
        {
            if(ch[i]=='r')
                printf("%d\n", arr[i]);
        }
    }
}
