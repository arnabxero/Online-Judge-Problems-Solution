#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int c = 1, i;
    char str[10010];

    cin>>str;

    int n = strlen(str);

    for(i=0; i<n; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            c++;
    }
    cout<<c;
}
