#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[100005], *p;
    int x;
    cin >> s;
    if((p=strstr(s,"AB"))&&(strstr(p+2,"BA"))){
        cout<<"YES"<<endl;
    }
    else if((p=strstr(s,"BA"))&&(strstr(p+2,"AB"))){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}