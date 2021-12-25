#include<bits/stdc++.h>

using namespace std;

int arr[200];
int i = 0;

void conv_string(string str)
{
    int len = str.length();
    int j;

    for(j=0; j<len; j++)
        if(str[j]>='1' && str[j]<='3')
            arr[i++] = str[j]-'0';

    for(j=0; j<i; j++)
        cout<<arr[j]<<"+";
}

int main()
{
    string str;

    cin>>str;

    //conv_string(str);

    int len = str.length();

    int i;

    sort(&str[0], &str[0]+len);

    for(i=0; i<len; i++)
    {
        if(str[i]>='1' && str[i]<='3')
        {
            cout<<str[i];
            if(i<(len-1))
                cout<<"+";
        }
    }
}
