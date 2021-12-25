#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main ()
{
    int n, i;

    cin>>n;

    for(i=0; i<n; i++)
    {
        char ch[100020];

        cin>>ch;

        int len = strlen(ch), j, dupl = 0;
        char o_c = ch[0];

        for(j=1; j<len; j++)
        {
            if(o_c == ch[j])
            {
                dupl++;
            }
            else
                o_c = ch[j];
        }
        cout<<dupl<<endl;

        dupl = 0;
    }
}
