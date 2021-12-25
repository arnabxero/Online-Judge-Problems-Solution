#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;

    cin>>n;

    char ch[n+5];

    for(i=0; i<n; i++)
        cin>>ch[i];

    int z = 0;

    while(z<(n-1))
    {
        int mc = 0;

        int sum = 0, tmp = 0, tmp2 = 0;

        for(i=0; i<=z; i++)
            sum += ch[i]-'0';

        //4cout<<"\n\nCase "<<z<<" Sum = "<<sum<<endl;

        for(i=z+1; i<n; i++)
        {
            tmp += ch[i]-'0';


            //cout<<"Case "<<z<<" Of "<<i<<" Tmp = "<<tmp<<endl;


           /* if(i==(n-1) && tmp2 == sum)
            {
                mc = 1;
                break;
            }

            if(i==(n-1) && tmp2!=sum)
            {
                mc = 0;
                break;
            }


            if(i<=(n-2) && tmp==sum)
            {
                tmp2 = tmp;
                tmp = 0;
                //mc = 1;
            }

            if(i<=(n-2) && tmp!=sum)
            {
                tmp2 = -23251;
                //mc = 1;
            }*/



            if(sum!=tmp && tmp<sum && i<=(n-2))
                continue;

            if(i==n-1)
            {
                if(tmp==sum)
                {
                    mc = 1;
                    break;
                }

                if(tmp!=sum)
                {
                    mc = 0;
                    break;
                }
            }

            if(tmp>sum)
            {
                mc = 0;
                break;
            }

            if(sum == tmp)
            {
                mc = 1;
                tmp = 0;
            }

        }

        //cout<<"\n\n\nMC Returned "<<mc<<endl;
        // cout<<"CK is "<<ck<<endl;

        if(mc==1)
        {
            cout<<"YES"<<endl;
            break;
        }

        if(z==(n-2) && mc == 0)
        {
            cout<<"NO"<<endl;
            break;
        }

        mc = 0;
        sum = 0;
        tmp = 0;

        z++;
    }
}
