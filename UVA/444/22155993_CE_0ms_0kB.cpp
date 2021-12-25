#include<stdio.h>
#include<string.h>
#include<iostream>

        using namespace std;

int rev(int n)
{
    int r = 0, temp;
    while(n!=0)
    {
        temp = n%10;
        r = r*10+temp;
        n /= 10;
    }
    return r;
}
int main ()
{
    char str[1000];
    int n = 0, i, j, len;

    while(cin.getline(str,1000))
    {
        if(str[0]-48 >= 0 && str[0]-48 <=9)
        {
            len = strlen(str);
            strrev(str);

            for(i=0; i<len; i++)
            {
                n = n*10 + str[i] - 48;

                if (n == 32 || n == 33 || n == 44 || n == 46 || n == 58 || n == 59 || n == 63 || (n >= 65 && n <= 90) || (n >= 97 && n <= 122))
                {
                    printf("%c", n);
                    n = 0;
                }
            }
        }
        else
        {
            len = strlen(str);

            for(i=len-1; i>=0; i--)
            {
                int k = str[i];
                printf("%d", rev(k));
            }
        }
        printf("\n");
    }
    return 0;
}
