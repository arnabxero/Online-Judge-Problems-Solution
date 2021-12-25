#include<stdio.h>
int main ()
{
    char c, s[100], sen[1000];

    scanf("%c", &c);
    scanf("%s", s);
    scanf("\n%[^\n]s", sen);

    printf("%c\n%s\n%s", c, s, sen);
    return 0;
}
