#include<bits/stdc++.h>
#define ull unsigned long long

using namespace std;

int main ()
{
	ull int x, i = 1;
	
	cin>>x;
	
	while(x>0)
	{
		x-=i;
		
		if(i==1)
			i=2;
			
		else if(i==3)
			i=1;
			
		else if(i==2)
			i=3;
	}
	if(x==0)
		cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	
}
			
		
		