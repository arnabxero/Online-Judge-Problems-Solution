#include<bits/stdc++.h>
//Arnab
using namespace std;

bool comp(string str1, string str2)
{
    int size_s1 = str1.length();
    int size_s2 = str2.length();
    int i;

    if(size_s1<size_s2)
        return true;
    else if(size_s1>size_s2)
        return false;

    else if(size_s1==size_s2)
    {
        for(i=0; i<size_s1; i++)
        {
            if(str1[i]<str2[i])
                return true;
            else if(str1[i]>str2[i])
                return false;
        }
    }
    return false;
}
int main ()
{
    int n, i;

    cin>>n;

    string str[n];

    for(i=0; i<n; i++)
        cin>>str[i];

    sort(str, str+n, comp);

    for(i=0; i<n; i++)
        cout<<str[i]<<endl;
        
    return 0;
}