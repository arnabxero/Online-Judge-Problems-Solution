#include<bits/stdc++.h>
//arnab

using namespace std;

int t;

int n, m;

int num[105];

string a[105];

string str1, str2;

bool ck(string b, string c)
{
    for(int i = 0; i < b.size(); i++)
    {
        if(b[i] != c[c.size() - 1 - i])
            return 0;
    }
    return 1;
}

bool ck2(string y)
{
    for(int i = 0; i < y.size() / 2; i++)
    {
        if(y[i] != y[y.size() - 1 - i])
            return 0;
    }
    return 1;
}

int main()
{
    cin >> n >> m;

    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 1; i <= n; i++)
    {
        if(!num[i])
        {
            for(int j = 1; j != i && j <= n; j++)
            {
                if(!num[j])
                {
                    if(ck(a[i], a[j]))
                    {
                        str1 += a[i];

                        num[i] = 1;

                        num[j] = 1;
                    }
                }
            }
        }
    }

    for(int i = 1; i <= n; i++)
    {
        if(!num[i])
        {
            if(ck2(a[i]))
            {
                if(a[i].size() > str2.size())
                {
                    str2 = a[i];

                    num[i] = 1;
                }
            }
        }
    }
    cout << 2 * str1.size() + str2.size() << endl;

    cout << str1 << str2;

    for(int i = str1.size() - 1; i >= 0; i--)
        cout << str1[i];

    cout << endl;

}
