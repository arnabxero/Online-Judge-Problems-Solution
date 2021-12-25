#include<bits/stdc++.h>
//arnab
using namespace std;

int main()
{
    char str[100000];
    int i;

    scanf(" %[^\n]s ", str);

    while(str[0]!='*')
    {
        int n = strlen(str);
        int i, r = 1;

        for(i=0; i<n; i++)
        {
            if(str[i]>='A' && str[i]<='Z')
                str[i] = str[i]+32;

        }

        for(i=0; i<n; i++)
        {
            if(str[i]==' ' && str[i+1]!=str[0])
            {
                r = 0;
                break;
            }
        }
        if(r==1)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
        scanf(" %[^\n]s ", str);

    }
}
