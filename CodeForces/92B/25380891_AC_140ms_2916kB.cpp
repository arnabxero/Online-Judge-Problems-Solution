#include<bits/stdc++.h>

using namespace std;

/*int bin_dec(string str, int n)
{
    int dec = 0, j = 0, rem, i;

    for(i=(n-1); i>=0; i--)
    {
        rem = str[i]-'0';
        dec += rem * pow(2, j);
        ++j;
    }
    return dec;
}

int main()
{
    string str;

    cin>>str;

    int len = str.length();

    int x = bin_dec(str, len);

    int c = 0;

    while(x!=1)
    {
        c++;
        if(x%2)
            x++;
        else x/=2;
    }

    cout<<c<<endl;
}
*/

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
