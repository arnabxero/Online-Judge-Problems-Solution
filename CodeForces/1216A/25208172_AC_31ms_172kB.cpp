#include<stdio.h>
//arnab
int main ()
{
    int n, i, j, ans = 0;
    scanf("%d", &n);
    char a[n];
    scanf("\n%s", a);
 
    for(i=0; i<n; i+=2)
    {
        if(a[i]=='b' && a[i+1]=='b')
        {
            a[i] = 'a';
            ans += 1;
        }
        if(a[i]=='a' && a[i+1]=='a')
        {
            a[i] = 'b';
            ans += 1;
        }
    }
    printf("%d\n", ans);
    printf("%s", a);
 
    return 0;
}