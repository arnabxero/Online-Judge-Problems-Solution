#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, count_zero = 0, count_one = 0;

    cin>>n;

    char ch;

    for(i=0; i<n; i++)
    {
        cin>>ch;

        if(ch=='1')
            count_one++;
        if(ch=='0')
            count_zero++;
    }

    int min_del = ((count_one>count_zero)?count_zero:count_one);

    int result = n-(min_del*2);

    cout<<result<<endl;
}
