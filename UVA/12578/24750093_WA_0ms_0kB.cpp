///**************** Iftekhar Ahmed Arnab ****************///
///********** North East University Bangladesh **********///
///****************** ID: 190103020028 ******************///
///********************* 20th Batch *********************///
///**************** Session: Spring-2019 ****************///
///********* Current Semester : 4th(March, 2020) ********///
///************ Email : arnab.xero@gmail.com ************///


#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t;

    double l, w, r;

    cin>>t;

    while(t--)
    {
        cin>>l;

        w = l*0.6;

        r = l*0.2;

        double tarea = l*w;
        double carea = 3.1415*r*r;
        double area = tarea - carea;

        printf("%.2lf %.2lf\n", carea, area);
    }
}
