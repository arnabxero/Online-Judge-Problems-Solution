#include<bits/stdc++.h>

using namespace std;

int main ()
{
    char ch[1111];

    cin>>ch;

    if(ch[0]>='a' && ch[0]<='z')
        ch[0] = ch[0]-32;

    cout<<ch<<endl;
}
