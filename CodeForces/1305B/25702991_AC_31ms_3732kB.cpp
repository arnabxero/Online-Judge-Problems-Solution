#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[20005], ck = 0;

    char str[20005];

    int ln, c, n, i;

    cin>>str+1;

    n = strlen(str+1);

    ln = 1;

    c = n;

    while(true)
    {
        while(ln<=n && str[ln]==')')
            ln++;

        while(1<=c && str[c]=='(')
            c--;

        if(ln>c)
            break;

        arr[++ck] = ln;

        arr[++ck] = c;

        ln++;

        c--;
    }

    if(!ck)
        cout<<"0"<<endl;

    else
    {
        cout<<"1"<<endl<<ck<<endl;

        sort(arr+1, arr+1+ck);

        for(i=1; i<ck; i++)
            cout<<arr[i]<<" ";

        cout<<arr[ck]<<endl;
    }
}
