#include<bits/stdc++.h>

using namespace std;
//Arnab
int main()
{
    int m;
    int arr[10008];

    while(scanf("%d", &m)==1)
    {
        int i;

        for(i=0; i<m; i++)
            cin>>arr[i];

        int ck = 1, ans = 0;

        while(ck==1)
        {
            ck = 0;

            int mx = -9999999, p = 1;

            for(i=1; i<m; i++)
            {
                if(arr[i]>mx)
                {
                    mx = arr[i];
                    p = i;
                }
            }

            if(mx>=arr[0])
            {
                arr[p]--;

                arr[0]++;

                ans++;

                ck = 1;
            }

            else
                ck = 0;
        }
        cout<<ans<<endl;
    }
}