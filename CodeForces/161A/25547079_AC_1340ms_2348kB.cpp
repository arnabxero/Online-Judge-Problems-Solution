#include<bits/stdc++.h>
#define ll long long

using namespace std;

struct db
{
    int sn;
    int vn;
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

    struct db xrr[m+n];

    int j = 0, k = 0, c = 0;
    i = 0;

    while(i<n && j<m)
    {
        //cout<<i<<"="<<arr[i]<<"___"<<j<<"="<<brr[j]<<endl;

        //cout<<(arr[i])<<" "<<(brr[i]-x)<<"+_+_+_+"<<(arr[i])<<" "<<(brr[i]+y)<<endl;

        /*if(((arr[i]-x)<=brr[j]) && ((arr[i]+y)>=brr[j]))
        {
            //cout<<"GOTCHA!!"<<endl;
            c++;
            xrr[k].sn = i;
            xrr[k].vn = j;
            xrr[k].xp = true;
            j++;
            k++;
        }
        i++;*/

        //cout<<i<<"+++"<<j<<"_____________"<<arr[i]+y<<"+++++"<<brr[j]<<endl;

        if(brr[j]<(arr[i]-x))
            j++;

        else if(brr[j]>(arr[i]+y))
            i++;

        else
        {
            //cout<<"WTF"<<endl;
            xrr[c].sn = i;
            xrr[c].vn = j;
            c++;
            i++;
            j++;
        }
    }

    cout<<c<<endl;

    for(i=0; i<c; i++)
    {
        cout<<xrr[i].sn+1<<" "<<xrr[i].vn+1<<endl;
    }
}
