#include<bits/stdc++.h>
#define elif else if

using namespace std;

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
    int t, i;

    cin>>t;

    for(i=1; i<=t; i++)
    {
        int y1, d1, y2, d2, j;

        int c = 0;

        string m1, m2;
        char ch;

        cin>>m1>>d1>>ch>>y1;
        cin>>m2>>d2>>ch>>y2;

        int x = y1;

        while(!(x%400==0 || (x%100!=0 && x%4==0)))
            x++;

        for(j=x; j<=y2; j+=4)
            if(j%400==0 || (j%100!=0 && j%4==0))
                c++;

        if(y1%400==0 || (y1%100!=0 && y1%4==0))
            if(month_c(m1)>2)
                c-=1;

        if(y2%400==0 || (y2%100!=0 && y2%4==0))
            if(month_c(m2)<=2 && d2<29)
                c-=1;

        printf("Caes %d: %d\n", i, c);
    }
}
