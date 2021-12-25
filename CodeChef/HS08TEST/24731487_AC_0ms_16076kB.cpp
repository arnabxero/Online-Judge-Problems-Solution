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
	int x;

	double y;

	cin>>x>>y;

	if((x+.5)<y && x%5==0)
	{
		printf("%.2lf", y-x-0.50);
	}

	else printf("%.2lf", y);

	return 0;
}
