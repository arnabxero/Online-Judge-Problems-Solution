include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin>>t;

    while(t--)
    {
        int i, r = 0;

        char ch[300000];

        cin>>ch;

        int len = strlen(ch);

        for(i=0; i<len; i++)
        {
            if(ch[i]=='1')
                r++;
        }
        if(r%2==0)
            cout<<"LOSE"<<endl;

        else cout<<"WIN"<<endl;
    }
}