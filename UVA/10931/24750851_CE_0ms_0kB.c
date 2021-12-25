#include<stdio.h>
#include<string.h>

int bin_conv(int n, char ch[])
{
    int i = 0;

    while(n>0)
    {
        ch[i++] = (n%2)+48;
        n/=2;
    }
    return i;
}

int one_cnt(char ch[], int n)
{
    int i, r = 0;

    for(i=0; i<n; i++)
        if(ch[i]=='1')
            r++;

    return r;
}

int main ()
{
    int n;

    scanf("%d", &n);

    while(n>0)
    {
        char ch[300005];

        int len = bin_conv(n, ch);
        int rslt = one_cnt(ch, len);

        printf("The parity of %s is %d (mod 2).\n", strrev(ch), rslt);

        scanf("%d", &n);
    }
}
