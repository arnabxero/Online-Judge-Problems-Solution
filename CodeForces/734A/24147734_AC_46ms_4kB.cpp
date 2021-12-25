#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int n, i, d = 0, a = 0;
    char ch;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>ch;

        if(ch=='A')
            a++;
        else d++;
    }
    if(a==d)
        cout<<"Friendship"<<endl;
    else if(a>d)
        cout<<"Anton"<<endl;
    else cout<<"Danik"<<endl;
}
