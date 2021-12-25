#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t;

    cin>>t;

    while(t--)
    {
        int n, sum = 0, r = 1, i = 1, j = 1;

        cin>>n;

        if(n<10)
            sum+=n;

        else sum+=9;

        while(r<=n)
        {
            r = (r*10)+1;

            while(j<10 && r<=n)
            {
                r = r*j;

                //cout<<r<<endl;

                if(r>n)
                    break;

                sum++;

                r = r/j;

                j++;
            }
            j = 1;
        }
        cout<<sum<<endl;
    }
}
