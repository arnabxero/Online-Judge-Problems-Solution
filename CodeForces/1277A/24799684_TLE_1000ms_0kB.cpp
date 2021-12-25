#include<bits/stdc++.h>

using namespace std;

int y_n(int n)
{
    int i, r = 1;
    int ini = n%10;
   // cout<<n<<endl;

    while(n>0)
    {
        //cout<<n<<" "<<ini<<endl;
        if(n%10!=ini)
        {
            r = 0;
            break;
        }
        n/=10;
    }
    return r;
}

int main ()
{
    int t;

    cin>>t;

    while(t--)
    {
        int n, i, sum = 0;

        cin>>n;

        for(i=1; i<=n; i++)
        {
            int r = y_n(i);

            if(r==1)
                sum++;
        }
        cout<<sum<<endl;
    }
}
