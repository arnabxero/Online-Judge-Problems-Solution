#include<bits/stdc++.h>

using namespace std;

int main ()
{
    char ch[104];

    int u = 0, l = 0, i, ln;

    cin>>ch;

    ln = strlen(ch);

    for(i=0; i<ln; i++)
    {
        if(ch[i]>='a' && ch[i]<='z')
            l++;
        if(ch[i]>='A' && ch[i]<='Z')
            u++;
    }

    if(u>l)
        for(i=0; i<ln; i++)
        {
            if(ch[i]>='a' && ch[i]<='z')
                printf("%c", ch[i]-32);//cout<<ch[i]-32;
            else cout<<ch[i];
        }
    else
        for(i=0; i<ln; i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
            printf("%c", ch[i]+32);//cout<<ch[i]+32;
        else cout<<ch[i];
    }
}
