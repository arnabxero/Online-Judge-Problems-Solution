#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main ()
{
    char str[100000];

    while(gets(str))
    {
        int c = 0, chck = 0, i;

        int n = strlen(str);

        for(i=0; i<n; i++)
        {
            if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
                chck = 1;
                
            else
            {
                if(chck==1)
                {
                    c++;
                    chck = 0;
                }
            }
        }
        if(chck == 1)
            c++;

        printf("%d\n", c);
    }
    return 0;
}
