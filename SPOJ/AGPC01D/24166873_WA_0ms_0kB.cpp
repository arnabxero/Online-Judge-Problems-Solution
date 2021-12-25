#include<stdio.h>

int main ()
{
    int n, i, d = 0, a = 0;
    char ch;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf(" %c", &ch);

        if(ch=='A')
            a++;
        else
            d++;
    }
    if(a==d)
        printf("Friendship");
    else if(a>d)
        printf("Anton");
    else
        printf("Danik");

}