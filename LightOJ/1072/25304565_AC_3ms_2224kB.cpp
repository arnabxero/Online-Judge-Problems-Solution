#include<bits/stdc++.h>

using namespace std;

//arnab

#define pi acos(-1)

int main()
{
    int t;

    cin>>t;

    int i;

    for(i=1;i<=t;i++)
    {
        double R;

        int n;

        cin>>R>>n;

        double angle=pi/n;

        double sin_angle=sin(angle);

        double r=(R*sin_angle)/(1+sin_angle);

        cout<<"Case "<<i<<": ";

        printf("%.6f\n",r);
    }
}