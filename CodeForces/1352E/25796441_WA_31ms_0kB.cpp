#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i, c = 0;
        cin>>n;
        int arr[n];
        for(i=0; i<n; i++)
            cin>>arr[i];

        for(i=0; i<n; i++)
        {
           // cout<<"Checking array = "<<arr[i]<<endl<<endl;
            int main = arr[i];
            int j = 0, k = 0;
            int adder = 0;
            bool ck = false;
            int cc = 0;

            for(j=0; j<n; j++)
            {
                cc = 0;
                adder = 0;
                for(k=j; k<n; k++)
                {
                    if(adder==main && cc>1)
                    {
                        ck = true;
                        c++;
                        break;
                    }
                    if(adder>main)
                        break;

                    adder+=arr[k];
                    cc++;
                }
                if(ck)
                    break;
            }
        }
        cout<<c<<endl;

    }
}
