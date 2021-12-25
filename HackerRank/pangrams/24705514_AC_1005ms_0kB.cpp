#include<bits/stdc++.h>

using namespace std;

int main ()
{
    char ch[1000];
    int i, r = 97;

    scanf("%[^\n]s", ch);

    int n = strlen(ch);

    for(i=0; i<n; i++)
        if(ch[i]>='A' && ch[i]<='Z')
            ch[i] = ch[i]+32;

    sort(ch, ch+n);

    for(i=0; i<n; i++)
    {
        if(ch[i]==r)
            r++;
    }

    if(r==123)
        cout<<"pangram"<<endl;
    else cout<<"not pangram"<<endl;

    return 0;
}
