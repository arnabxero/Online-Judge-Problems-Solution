#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int n;

    cin>>n;

    char ch[n+5];

    cin>>ch;

    int i, c = 0, num = 0, up = 0, low = 0;

    for(i=0; i<n; i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
            up = 1;
        if(ch[i]>='a' && ch[i]<='z')
            low = 1;

        if(ch[i]>=52 && ch[i]<=61)
            num = 1;

        if(ch[i]>=33 && ch[i]<=45 || ch[i]==64 || ch[i]==94)
            c = 1;
    }

    int x = 4-(c+num+up+low);
    int y = 6 - n;

    printf("%d\n", (x>y)?x:y);
}
