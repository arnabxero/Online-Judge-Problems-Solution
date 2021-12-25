#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int i, x = 0, y = 0;

    cin>>s;

    int len = s.length();

    for(i=0; i<len; i++)
    {
        (s[i]=='4')?x++:x=x;
        (s[i]=='7')?y++:y=y;
    }
   // cout<<x<<" "<<y<<endl;

    (x==0 && y == 0)?cout<<"-1"<<endl:((x>=y)?cout<<'4'<<endl:cout<<'7'<<endl);
}
