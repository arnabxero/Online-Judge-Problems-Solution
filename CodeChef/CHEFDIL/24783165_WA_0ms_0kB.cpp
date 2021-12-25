#include<bits/stdc++.h>

using namespace std;

int ln;
char ch[200000];
int pos;

int ckr()
{
    int i, r = 1;

    for(i=0; i<ln; i++)
    {
        if(ch[i]!='x')
            r = 0;
    }
    return r;
}

int call_ck()
{
    //printf("Called ck\n");
    int i, r = 0;


    for(i=0; i<ln; i++)
    {
        if(ch[i] == '1')
        {
            r = 1;
            pos = i;
            ch[i] = 'x';
            break;
        }
       // printf("%c", ch[i]);
    }
    return r;
}

void call_changer()
{
    int r = 0, i;

    while(call_ck()==1)
    {
        if(pos>0 && pos<ln)
        {
            if(ch[pos+1]=='1')
                ch[pos+1] = '0';
            else if(ch[pos+1]=='0')
                ch[pos+1] = '1';

            if(ch[pos-1]=='1')
                ch[pos-1] = '0';
            else if(ch[pos-1]=='0')
                ch[pos-1] = '1';
        }

        if(pos==0)
        {
            if(ch[pos+1]=='1')
                ch[pos+1] = '0';
            else if(ch[pos+1]=='0')
                ch[pos+1] = '1';
        }

        if(pos==ln-1)
        {
            if(ch[pos-1]=='1')
                ch[pos-1] = '0';
            else if(ch[pos-1]=='0')
                ch[pos-1] = '1';
        }
    }
}
int main ()
{
    int t;

    cin>>t;

    while(t--)
    {

        cin>>ch;

        ln = strlen(ch);

        call_changer();

        if(ckr()==1)
            cout<<"WIN"<<endl;
        else cout<<"LOSE"<<endl;


    }
}
