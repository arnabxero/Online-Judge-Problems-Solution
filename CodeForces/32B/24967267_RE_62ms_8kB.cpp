#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch[100];

    cin>>ch;

    int i;
    int len = strlen(ch);

    for(i=0; i<len;)
    {
        if(ch[i]=='-' && ch[i+1]=='-')
        {
            cout<<'2';
            i+=2;
        }
        //cout<<'\n'<<"Hello : "<<i<<" "<<endl;
        if(ch[i]=='-' && ch[i+1]=='.')
        {
            cout<<'1';
            i+=2;
        }

        if(ch[i]=='.')
        {
            cout<<'0';
            i++;
        }


    }
}
