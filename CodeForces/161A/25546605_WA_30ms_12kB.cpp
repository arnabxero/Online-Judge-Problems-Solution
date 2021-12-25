#include<bits/stdc++.h>
#define ll long long

using namespace std;

struct db
{
    int sn;
    int vn;
    bool xp = false;
};

int main()
{
    int n, m, x, y, i;

    cin>>n>>m>>x>>y;

    int arr[n], brr[m];

    for(i=0; i<n; i++)
        cin>>arr[i];

    for(i=0; i<m; i++)
        cin>>brr[i];

    struct db xrr[m];

    int j = 0, k = 0, c = 0;
    i = 0;

    while(i<n && j<m)
    {
        //cout<<i<<"="<<arr[i]<<"___"<<j<<"="<<brr[j]<<endl;

        //cout<<(arr[i])<<" "<<(brr[i]-x)<<"+_+_+_+"<<(arr[i])<<" "<<(brr[i]+y)<<endl;

        if(arr[i]>=(brr[j]-x) && (arr[i]<=brr[j]+y))
        {
            //cout<<"GOTCHA!!"<<endl;
            c++;
            xrr[k].sn = i;
            xrr[k].vn = j;
            xrr[k].xp = true;
            j++;
            k++;
        }
        i++;
    }

    cout<<c<<endl;

    for(i=0; i<n; i++)
    {
        if(!(xrr[i].xp))
            break;

        cout<<xrr[i].sn+1<<" "<<xrr[i].vn+1<<endl;
    }
}
