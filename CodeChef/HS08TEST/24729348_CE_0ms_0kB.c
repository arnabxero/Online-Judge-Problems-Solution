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
		
	
	