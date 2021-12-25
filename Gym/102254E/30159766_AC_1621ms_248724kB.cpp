#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str[8000009];
    unordered_map<string,int>m;
    char ch[8000009];
    int v[8000009];

    int n;
    scanf("%d", &n);

    getchar();

    int cnt = 0;

    for(int i=0; i<n; i++)
    {
        scanf("%s", ch);

        str[i] = string(ch);

        if(str[i].size()<4)
            continue;

        m[str[i]]+=1;

        if(m[str[i]]>1)
            v[cnt++] = i;
    }

    if (cnt == 0)
        printf("SAFO\n");

    else
    {
        printf("%d\n", cnt);

        for(int i=0; i<cnt; i++)
            printf("%s\n", str[v[i]].c_str());
    }
}
