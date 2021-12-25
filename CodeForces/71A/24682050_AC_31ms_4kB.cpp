#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t;

    cin>>t;

    while(t--)
    {
        char ch[105];

        cin>>ch;

        if(strlen(ch)>10)
            printf("%c%d%c\n", ch[0], strlen(ch)-2, ch[strlen(ch)-1]);
        else cout<<ch<<endl;
    }
}
