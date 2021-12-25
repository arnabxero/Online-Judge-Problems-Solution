#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t;

    cin>>t;

    while(t--)
    {
        char ch[40];

        cin>>ch;

        int i = 0, r1 = 0, r2 = 0, x = 676, temp;

        for(i=0; i<=2; i++)
        {
            int t = ch[i];
            t-=65;

            //cout<<t<<" "<<ch[i]<<endl;
            //cout<<x<<endl;
            temp = (t*x);

            //cout<<temp<<endl;
            x = x/26;
            r1+=temp;
        }

        for(i=4; i<=7; i++)
            r2 = (r2*10)+(ch[i]-48);

       // cout<<r1<<"   "<<r2<<endl;

       if(abs(r2-r1)<=100)
        cout<<"nice"<<endl;
       else cout<<"not nice"<<endl;
    }
}
