#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t;

    scanf("%d", &t);

    int cases = 0;

    char ch[30][200];

    int arr[30];

    while(t--)
    {
        int i, mx = -1;

        for(i=0; i<10; i++)
        {
            scanf ("%s %d", ch[i], &arr[i]);
            mx = max(mx, arr[i]);
        }

        printf("Case #%d:\n", cases++);

        for(i=0; i<10; i++)
        {
            if(mx == arr[i])
                printf("%s\n", ch[i]);
        }
    }
    return 0;
}
