#include<bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin>>cases;

    cout<<"Lumberjacks:"<<endl;

    while(cases--)
    {
        bool rslt = true, s2b = false;

        int i, m, n, o;

        cin>>m>>n;

        if(m<n)
            s2b = true;
        else if(n>m)
            s2b = false;

        for(i=2; i<10; i++)
        {
            cin>>o;

            if(o>n)
            {
                if(s2b==false)
                {
                    rslt = false;
                }
            }
            else if(o<n)
            {
                if(s2b==true)
                {
                    rslt = false;
                }
            }
        }

        if(rslt==true)
            cout<<"Ordered"<<endl;
        else cout<<"Unordered"<<endl;
    }
}
