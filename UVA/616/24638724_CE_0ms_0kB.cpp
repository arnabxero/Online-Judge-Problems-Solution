#include<bits/stdc++.h>

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int x, i, chck;

    cin>>x;

    while(x!=(-1))
    {
        chck = 0;

        for(i=x-1; i>0; i--)
        {
            int c = 0, y = x;

            while(c<i)
            {
                if(y%i==1)
                {
                    //cout<<y<<" "<<c<<" "<<endl;
                    c++;
                    //int k = (y-1)/i;
                    y = y-1-((y-1)/i)
                    //y-=k;
                }
                else
                {
                    //cout<<"else"<<endl;
                    break;
                }
            }
            if(c==i)
            {
                //cout<<"c==i"<<endl;
                chck = i;
                break;
            }
        }
        if(chck!=0)
            cout<<x<<" coconuts, "<<chck<<" people and 1 monkey"<<endl;
        else    cout<<x<<" coconuts, no solution"<<endl;

        cin>>x;
    }
    return 0;
}

