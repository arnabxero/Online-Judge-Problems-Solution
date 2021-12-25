#include<bits/stdc++.h>

using namespace std;

char str[2000009];

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, i, j;

        char a, b, str2[128];

        scanf("%s", &str);

        scanf("%d", &n);

        for(i=0; i<128; i++)
            str2[i] = i;

        for(j=0; j<n; j++)
        {
            cin>>a>>b;

            for(i='A'; i<='Z'; i++)
            {
                if(str2[i]==b)
                    str2[i] = a;
            }
        }

        for(i=0; str[i]; i++)
        {
            printf("%c", str2[str[i]]);
        }
        cout<<endl;
    }
}
