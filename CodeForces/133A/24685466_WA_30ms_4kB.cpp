#include<bits/stdc++.h>

using namespace std;

int main ()
{
    char ch[105];
    int r = 0, i;

    cin>>ch;

    int n = strlen(ch);

    for(i=0; i<n; i++)
    {
        if(ch[i]=='H' || ch[i]=='Q' || ch[i]=='9' || ch[i]=='+')
        {
            r = 1;
            break;
        }
    }
    if(r==1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
