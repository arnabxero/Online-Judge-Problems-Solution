#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c[100005], *p;
    
    cin >> ch;
    
    if((p=strstr(c,"AB"))&&(strstr(p+2,"BA")))
    {
        cout<<"YES"<<endl;
    }
    
    else if((p=strstr(c,"BA"))&&(strstr(p+2,"AB")))
    {
        cout<<"YES"<<endl;
    }
    
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}