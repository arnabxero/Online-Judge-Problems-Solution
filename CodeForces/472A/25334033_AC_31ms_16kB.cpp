#include<bits/stdc++.h>

using namespace std;

bool np_ck(int n)
{
    bool r = false;

    int i;

    for(i=2; i<=(n/2); i++)
    {
        if(n%i==0)
        {
            r = true;
            break;
        }
    }
    return r;
}

int main()
{
    int x;

    int i;

    int r1 = -1, r2 = -1;

    cin>>x;

    int tmp = (x%2)?(x/2):((x/2)+1);

    for(i=1; i<=tmp; i++)
    {
        if(np_ck(i) && np_ck(x-i))
        {
            r1 = i;
            r2 = (x-i);
            break;
        }
    }

    if(r1!=-1 && r2!=-1)
        cout<<r1<<" "<<r2<<endl;
}
