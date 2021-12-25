#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int s1 = 0, s2 = 0;

    char str1[105], str2[105];

    cin>>str1>>str2;

    int i, n = strlen(str1);

    /*for(i=0; i<n; i++)
    {
        if(str1[i]>='A' && str1[i]<='Z')
            str1[i] = str1[i] + 32;

        if(str2[i]>='A' && str2[i]<='Z')
            str2[i] = str2[i] + 32;

        s1+=str1[i];
        s2+=str2[i];
    }

    int r = strcmp(str1, str2);*/

    int r = strcasecmp(str1, str2);

    cout<<r<<endl;
}