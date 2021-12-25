#include<stdio.h>
int main ()
{
    long long int destination;
    scanf("%lld", &destination);

    printf(destination%6 == 0 || destination%6 == 1 || destination%6 == 3 ? "yes\n" : "no\n");

    return 0;
}
