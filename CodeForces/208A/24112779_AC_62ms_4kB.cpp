#include<stdio.h>
#include<bits/stdc++.h>

    using namespace std;

int main ()
{
    char str[10000];

    scanf("%s", str);

    int i, sc = 1;

    for(i=0; i<strlen(str); i++)
    {
        if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B')
        {
            if(i>0 && sc==0)
            {
                printf(" ");
                sc = 1;
            }
            i+=2;
        }
        else
        {
            printf("%c", str[i]);
            sc = 0;
        }
    }
}
