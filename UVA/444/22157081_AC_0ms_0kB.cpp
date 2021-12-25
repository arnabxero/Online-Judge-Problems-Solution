#include<cstring>
#include<iostream>
#include<cstdio>
#include <algorithm>

        using namespace std;

int rev(int i)
{
    int x;
    int r = 0;
    while(i>0)
    {
        x = i%10;
        printf("%d", x);
        i = i/10;
    }
    return r;
}

int main()
{
    char str[1000];
    int i,len,n;
    while (cin.getline(str,1000))
    {
        n = 0;
        if ((str[0]-48) >= 0 && (str[0]-48) <= 9)
        {
            len = strlen(str);
            reverse(str, str+len);
            for (i = 0; str[i]; ++i)
            {
                n = n * 10 + str[i]-48;
                if ((n >= 65 && n <= 90) || (n >= 97 && n <= 122) || n == 32 || n == 33 || n == 44 || n == 46 || n == 58 || n == 59 || n == 63)
                {
                    printf("%c", n);
                    n = 0;
                }
            }
        }
        else
            for (i=strlen(str)-1; i>=0; i--)
            {
                int j=str[i];
                rev(j);
            }
        printf("\n");
    }
    return 0;
}
