#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    cin>>str;

    int len = str.length()-1;
    int c = 0;

    while(len>=1)
    {
        while(len>=0 && str[len]=='0')
        {
            len--;
            c++;
        }

        if(len>=1 && str[len]=='1')
        {
            c++;

            while(len>=0 && str[len]=='1')
            {
                len--;
                c++;
            }

            if(len>=0)
                str[len]='1';
        }
    }
    cout<<c<<endl;
}