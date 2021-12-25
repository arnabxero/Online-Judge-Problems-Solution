#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str1, str2;

    cin>>str1>>str2;

    int i, len = str1.length();

    bool breaker = false;

    for(i=0; i<len; i++)
    {
        if(str1[i]<str2[i])
        {
            breaker = true;

           // cout<<"+<<<++++++++++Here i = "<<i<<" - "<<str2[i]<<endl;
        }
    }

    if(breaker)
    {
        cout<<"-1"<<endl;
        return 0;
    }

    for(i=0; i<len; i++)
    {
        if(str1[i]==str2[i])
        {
           if(str1[i]=='z')
                cout<<str1[i];
           else
           {
               char ch = str1[i]+1;
               cout<<ch;
           }
        }

        else if(str1[i]>str2[i])
            cout<<str2[i];
    }

}
