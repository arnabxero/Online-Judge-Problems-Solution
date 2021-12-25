#include<bits/stdc++.h>

using namespace std;
//Arnab
int cngch(char *ch)
{
    int c;

    if(ch[0] >= '6' && ch[0] <= '9')
    {
        c = ch[0] - '0';
    }
    else if(ch[0] == 'T')
        c = 10;
    else if(ch[0] == 'J')
        c = 11;
    else if(ch[0] == 'Q')
        c = 12;
    else if(ch[0] == 'K')
        c = 13;
    else if(ch[0] == 'A')
        c = 14;

    return c;
}


int main()
{
    char c, ch[20];

    cin>>c;

    scanf(" %[^\n]s", ch);

    int i, len = strlen(ch);

    int f1 = cngch(&ch[0]);
    int f2 = cngch(&ch[3]);

    /*for(i=0; i<len; i++)
        cout<<ch[i]<<endl;*/

    if(ch[1] == ch[4] && ch[1] == c)
    {
        if(f1>f2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    else  if(ch[1] == c && ch[4] != c)
        cout<<"YES"<<endl;

    else if(ch[4] == c && ch[1] != c)
        cout<<"NO"<<endl;

    else if(ch[1]!=c && ch[4]!=c && ch[1] == ch[4])
    {
        if(f1>f2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}