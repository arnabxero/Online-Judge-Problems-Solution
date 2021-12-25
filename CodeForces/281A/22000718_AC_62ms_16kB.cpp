#include<stdio.h>
int main ()
{
    int i;
    char ch[1001];
    scanf("%s", ch);

    if(ch[0]>='a' && ch[0]<='z')
        ch[0] = ch[0]-32;

    printf("%s", ch);
    return 0;
}
