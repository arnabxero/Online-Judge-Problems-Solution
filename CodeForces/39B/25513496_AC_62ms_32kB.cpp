#include<bits/stdc++.h>

using namespace std;

struct db
{
    int accx;
    int time;
};

int main()
{
    int i, j, n, k, t, chck, brr[2000];

    struct db  arr[2000];

    while(cin>>n)
    {
        k = t = chck = 0;

        for(i=1; i<=n; i++)
        {
            cin>>arr[i].accx;

            arr[i].time=i;
        }

        for(i=1; ; i++)
        {
            chck=0;

            for(j=t+1; j<=n; j++)
            {
                if(arr[j].accx==i)
                {
                    chck=1;

                    brr[k]=arr[j].time;

                    k++;

                    t=j;

                    break;
                }
            }

            if(chck==0)
            {
                break;
            }
        }
        cout<<k<<endl;

        for(i=0; i<k; i++)
        {
            if(i!=(k-1))
            {
                cout<<brr[i]+2000<<" ";
            }

            else
            {
                cout<<brr[i]+2000<<endl;
            }
        }
    }
}
