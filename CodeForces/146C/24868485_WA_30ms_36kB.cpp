#include<bits/stdc++.h>

using namespace std;

int main ()
{
    char str1[20005], str2[20005];

    int i;

    cin>>str1>>str2;

    int c = 0, len = strlen(str1);

    for(i=0; i<len; i++)
        if(str1[i]!=str2[i])
            c++;

    cout<<c<<endl;
}
