#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch[2000];

    cin>>ch;

    int n = strlen(ch);

    bool r = true, c1 = false, c2 = false;

    //cout<<n;

    int i = 0;

    while(i<n && ch[i]!='@')
    {
        //cout<<ch[i]<<endl;
        if(!((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z') || (ch[i]>='0' && ch[i]<='9') || (ch[i]=='_')))
            r = false;
        //cout<<ch[i]<<"== False"<<endl;
        i++;
    }

    if(ch[i]=='@')
    {
        c1 = true;
        i++;
    }

    //cout<<ch[i];

    while(i<n && ch[i]!='/')
    {
        if(!((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z') || (ch[i]=='.')))
            r = false;
        //cout<<ch[i]<<"== False"<<endl;

        i++;
    }

    if(ch[i]=='/')
    {
        i++;
        //cout<<ch[i]<<endl;

        while(i<n)
        {
            if(!((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z') || (ch[i]>='0' && ch[i]<='9') || (ch[i]=='_')))
                r = false;
                //cout<<ch[i]<<"== False"<<endl;

            i++;
        }
    }
    //cout<<ch[i];


    if(r)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
