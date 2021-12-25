#include<bits/stdc++.h>

using namespace std;

int main ()
{
    char ch1[110], ch2[110];

    cin>>ch1>>ch2;

    int len1 = strlen(ch1);
    int len2 = strlen(ch2);
    int i, j = len2-1, chck = 1;

    for(i=0; i<len1; i++)
    {
        if(ch1[i]!=ch2[j])
        {
            chck = 0;
            break;
        }
        j--;
    }

    if(chck == 1)
        printf("YES");
    else printf("NO");

    return 0;
}
