#include<bits/stdc++.h>
#define elif else if
#define ll long long

using namespace std;

int leap_check(int n)
{
    if(n%400 || (n%100!=0 && n%4==0))
        return 1;
    else return 0;
}

int month_c(string str)
{
    if(str.compare("January")==0)
        return 1;
    elif(str.compare("February")==0)
        return 2;
    elif(str.compare("March")==0)
        return 3;
    elif(str.compare("April")==0)
        return 4;
    elif(str.compare("May")==0)
        return 5;
    elif(str.compare("June")==0)
        return 6;
    elif(str.compare("July")==0)
        return 7;
    elif(str.compare("August")==0)
        return 8;
    elif(str.compare("September")==0)
        return 9;
    elif(str.compare("October")==0)
        return 10;
    elif(str.compare("November")==0)
        return 11;
    elif(str.compare("December")==0)
        return 12;
}

int main()
{
    ll int t, i;

    cin>>t;

    for(i=1; i<=t; i++)
    {
        ll int y1, d1, y2, d2, j;

        ll int c = 0;

        string m1, m2;
        char ch;

        cin>>m1>>d1>>ch>>y1;
        cin>>m2>>d2>>ch>>y2;

        c = (y2/4-y2/100+y2/400)-(y1/4-y1/100+y1/400);

        if(leap_check(y1)==1 && (month_c(m1)==1 || month_c(m1)==2))
            c++;

        if(leap_check(y2)==1 && (month_c(m2)==1 || (month_c(m2)==2 && d2<29)))
            c--;

        printf("Case %lld: %lld\n", i, c);
    }
}
