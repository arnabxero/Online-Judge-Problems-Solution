#include<bits/stdc++.h>

using namespace std;

int check(char *ch, int n)
{
    int i, pos = -1;

    for(i=0; i<n-1; i++)
    {
        if((ch[i]=='1' && ch[i+1]=='0') || (ch[i]=='0' && ch[i+1]=='1'))
        {
            pos = i;
            break;
        }
    }
    return pos;
}

int main()
{
    int n;

    cin>>n;

    char ch[n];

    cin>>ch;

    int len, i;

    len = strlen(ch);

    bool f = true;

    int pos;

   // cout<<"This is string "<<ch<<endl<<endl;

    while(f)
    {

       /* for(i=0; i<len; i++)
            cout<<ch[i];

        cout<<endl;*/


        if(check(ch, len)==-1)
            f = false;

        if(check(ch, len)!=-1)
        {
            pos = check(ch, len);

            if(pos<=(len-4))
            {
               // cout<<"Running len-4"<<endl;

              //  cout<<"Replacing "<<ch[pos]<<" with "<<ch[pos+2]<<endl;

              //  cout<<"Replacing "<<ch[pos+1]<<" with "<<ch[pos+3]<<endl;

                ch[pos] = ch[pos+2];
                ch[pos+1] = ch[pos+3];
            }

            else if(pos==(len-3))
            {
               // cout<<"++++++++++len-3"<<endl;
                ch[pos] = ch[pos+2];
            }

            len = len-2;

        }
    }

    cout<<len<<endl;
}
