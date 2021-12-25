///**************** Iftekhar Ahmed Arnab ****************///
///********** North East University Bangladesh **********///
///****************** ID: 190103020028 ******************///
///********************* 20th Batch *********************///
///**************** Session: Spring-2019 ****************///
///********* Current Semester : 4th(March, 2020) ********///
///************ Email : arnab.xero@gmail.com ************///



#include<bits/stdc++.h>

using namespace std;

int lcm(int Num1, int Num2)
{
    int max_Value;

    max_Value = (Num1 > Num2)? Num1 : Num2;

    while(1)
    {
    	if(max_Value % Num1 == 0 && max_Value % Num2 == 0)
    	{
    		break;
		}
		++max_Value;
	}
    return max_Value;
}

int main ()
{
    int t;

    cin>>t;

    while(t--)
    {
        int x;

        cin>>x;

        int i = 1;
        int j = x-i;

        while( __gcd(i, j)+(lcm (i, j))!=x)
        {
            i++;
            j = x-i;
        }
        if(__gcd(i, j)+(lcm (i, j))==x)
            cout<<i<<" "<<j<<endl;
    }
}
