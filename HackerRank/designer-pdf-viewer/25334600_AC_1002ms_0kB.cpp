#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i;

    int arr[27];

    for(i=1; i<=26; i++)
        cin>>arr[i];

    string str;

    cin>>str;

    int len = str.length();

    int mx = -1;

    for(i=0; i<len; i++)
        if((arr[str[i]-96])>mx)
             mx = arr[str[i]-96];

    cout<<(mx*len)<<endl;
}
