#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch[10000];

    cin>>ch;

    int i;
    int len = strlen(ch);

    for(i=0; i<len; i++)
    {
        if(ch[i]=='.')
        {
            cout<<'0';
        }

        if(ch[i]=='-' && ch[i+1]=='.')
        {
            cout<<'1';
            i++;
        }
        if(ch[i]=='-' && ch[i+1]=='-')
        {
            cout<<'2';
            i++;
        }
    }
}
