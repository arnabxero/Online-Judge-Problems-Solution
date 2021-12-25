#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t, cse = 1, i, j;
    scanf("%d", &t);

    for(i=0; i<t;  i++)
    {
        ll mx  = 0, n, x;
        char ch;
        stack<ll>mng;

        printf("Case %d:\n", cse);

        scanf("%lld", &n);

        for(j=0; j<n; j++)
        {
            scanf(" %c", &ch);

            if(ch=='A')
            {
                scanf("%lld", &x);

                if(x>mx)
                    mx = x;

                mng.push(mx);
            }
            if(ch=='Q')
            {
                if (mng.empty())
                {
                    mx = 0;

                    printf("Empty\n");
                }
                else
                    printf("%lld\n", mng.top());
            }
            if(ch=='R')
            {
                if (!mng.empty())
                {
                    mng.pop();

                    if (!mng.empty())
                    {
                        if(mng.top()<mx)
                            mx = mng.top();
                    }
                    else mx = 0;
                }
            }
        }
        cse++;
    }
}

