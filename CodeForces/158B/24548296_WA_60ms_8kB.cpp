#include<bits/stdc++.h>

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, cnt = 0, x;

    cin>>n;

    int crr[5] = {0};

    for(i=0; i<n; i++)
    {
        cin>>x;

        crr[x]++;
    }
    /*for(i=1; i<5; i++)
        cout<<crr[i]<<endl;*/

    cnt += crr[4];

    cnt += crr[3];

    crr[1]-=crr[3];

    cnt += (crr[2]/2);

    crr[2] = crr[2]%2;

    if(crr[2]==1)
    {
        cnt+=1;
        crr[1]-=2;
    }

    cnt += crr[1]/4;
    crr[1] = crr[1]%4;

    if(crr[1]>0)
        cnt+=1;

    cout<<cnt<<endl;
}
