#include<bits/stdc++.h>

    using namespace std;

int main()
{
    //string str;
    char str[100020];
    cin>>str;

    int len = strlen(str);
    int pos, dc = 0, i;

    for(i=0; i<len; i++)
        if(str[i] == '0')
        {
            dc = 1;
            pos = i;
            break;
        }


    if(dc == 0)
        for(i=1; i<len; i++)
            printf("%c", str[i]);

    else
    {
        for(i=0; i<pos; i++)
            printf("%c", str[i]);
        for(i=pos+1; i<len; i++)
            printf("%c", str[i]);
    }
}