#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int n;

    cin>>n;

    int i, j, odd[n], even[n], x = 0, y = 0 , pon = 0;

    if(n<5)
    {
        if(n==1)
            cout<<1<<"\n"<<1<<endl;
        if(n==2)
            cout<<1<<"\n"<<1<<endl;
        if(n==3)
            cout<<2<<"\n"<<1<<" "<<3<<endl;
        if(n==4)
            cout <<4<<"\n"<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
        return 0;

    }
    //if(n%2==0)
       // cout<<n<<endl, pon = 1;

    //else
        //cout<<n-1<<endl, n = n-1;

    cout<<n<<endl;
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
            even[x++] = i;
        else
            odd[y++] = i;
    }

    for(i=0; i<x; i++)
        cout<<even[i]<<" ";

    //if(pon==0)


    for(i=0; i<y; i++)
        cout<<odd[i]<<" ";


}
