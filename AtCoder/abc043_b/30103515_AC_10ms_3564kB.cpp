#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str, str2 = "";;

    cin>>str;

    int i, sz = str.size();

    for(i=0; i<sz; i++)
    {
        if(str.at(i)=='0' || str.at(i)=='1')
        {
            str2+=str.at(i);
        }
        else if(str2.size()!=0)
        {
            str2.pop_back();
        }
    }
    cout<<str2<<endl;
}

