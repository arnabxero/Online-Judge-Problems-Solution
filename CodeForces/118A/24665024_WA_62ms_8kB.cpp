#include<bits/stdc++.h>

using namespace std;

int main ()
{
    char ch[104];

    int i;

    cin>>ch;

    int ln = strlen(ch);

    for(i=0; i<ln; i++)
    {
        if(ch[i]!='A' && ch[i]!='E' && ch[i]!='I' && ch[i]!='O' && ch[i]!='U' && ch[i]!='a' && ch[i]!='e' && ch[i]!='i' && ch[i]!='o' && ch[i]!='u')
        {
            if(ch[i]>='A' && ch[i]<='Z')
                printf(".%c", ch[i]+32);

            else printf(".%c", ch[i]);
        }

    }
}
