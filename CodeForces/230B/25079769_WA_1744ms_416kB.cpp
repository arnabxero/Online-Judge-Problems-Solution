#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        double x;

        cin>>x;

        double sq = sqrt(x);
        int sqi = sq;

        if(sqi==sq && x>3)
        {
            if(sqi==2 || sqi==3 || sqi==5 || sqi==7)
            {
                cout<<"YES"<<endl;
                continue;
            }

            else if(sqi%2!=0)
            {
                if(sqi%3!=0 && sqi%5!=0 && sqi%7!=0)
                {
                    cout<<"YES"<<endl;
                    continue;
                }
                else
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
            else
            {
                cout<<"NO"<<endl;
                continue;
            }
        }
        else
        {
            cout<<"NO"<<endl;
            continue;
        }
    }
}
