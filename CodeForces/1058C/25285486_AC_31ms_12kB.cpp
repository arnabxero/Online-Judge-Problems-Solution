#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, sum = 0;

    cin>>n;

    char ch[n+5];

    cin>>ch;

    for(i=0; i<(n-1); i++)
    {
        int j, tmp = 0, mc = 1;

        sum += ch[i]-'0';

        for(j=i+1; j<n; )
        {
            if(j>=n)
                break;

            tmp = ch[j]-'0';
            j++;

            while(j<n && tmp+ch[j]-'0'<=sum)
            {
                tmp+=ch[j]-'0';

                j++;
            }

            if(tmp!=sum)
                mc = 0;
        }

        if(tmp != sum)
            mc = 0;

        if(mc==1)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;
    return 0;
}
