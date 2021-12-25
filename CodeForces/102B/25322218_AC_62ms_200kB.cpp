#include<bits/stdc++.h>

using namespace std;

long long int repsum(long long int n)
{
    long long int tmp = 0;

    while(n>0)
    {
        tmp+=(n%10);
        n/=10;
    }
    return tmp;
}
int main()
{
    char ch[200000];

    cin>>ch;

    long long int n = 0, i;

    for(i=0; i<strlen(ch); i++)
        n+=ch[i]-'0';


    long long int r = 0;

    if(strlen(ch)>=2)
        r = 1;

    while(n>9)
    {
        n = repsum(n);
        r++;
    }
    cout<<r;
}
