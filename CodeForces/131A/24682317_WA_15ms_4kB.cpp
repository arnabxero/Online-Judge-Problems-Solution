#include<bits/stdc++.h>

using namespace std;

int main ()
{
    char ch[105];

    cin>>ch;

    int n = strlen(ch);
    int i, c = 0;

    for(i=0; i<n; i++)
        if(ch[i]>='a' && ch[i]<='z')
            c++;

    if(c==0)
    {
        for(i=0; i<n; i++)
            if(ch[i]>='a' && ch[i]<='z')
                ch[i] = ch[i]-32;
        cout<<ch;
    }
    else if(c==1 && ch[0]>='a' && ch[0]<='z')
    {
        ch[0] = ch[0]-32;

        for(i=1; i<n; i++)
            if(ch[i]>='A' && ch[i]<='Z')
                ch[i] = ch[i]+32;

        cout<<ch;
    }
    else cout<<ch;
}
