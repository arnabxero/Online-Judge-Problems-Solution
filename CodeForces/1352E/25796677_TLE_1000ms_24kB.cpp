#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i, c = 0;
        bool cck = false;
        cin>>n;
        int arr[n];
        for(i=0; i<n; i++)
            cin>>arr[i];

        for(i=0; i<n; i++)
        {
            cck = false;

            int add = 0, fnd = arr[i], j, k, minic = 0;
            bool ck = false;

            for(j=0; j<n; j++)
            {
                add = 0;
                minic = 0;
                ck = false;

                for(k=j; k<n; k++)
                {
                    add+=arr[k];
                    minic++;

                    if(add == fnd && minic>1)
                    {
                        ck = true;
                        break;
                    }
                    if(add>fnd)
                    {
                        break;
                    }
                }
                if(ck)
                {
                    cck = true;
                    break;
                }
            }
            if(cck)
                c++;
        }
        cout<<c<<endl;

    }
}
