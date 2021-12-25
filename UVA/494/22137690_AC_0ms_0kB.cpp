#include<stdio.h>
#include<string.h>
int main ()
{
    char ch[1001];

    while(gets(ch))
    {
        int i, word, sum = 0;

        for(i=0; i<strlen(ch); i++)
        {
            if((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z'))
            {
                word = 1;
            }
            else
            {
                if(word == 1)
                    sum += 1;

                word = 0;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
