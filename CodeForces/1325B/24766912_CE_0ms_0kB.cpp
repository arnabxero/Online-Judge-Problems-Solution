#include<iostream>

using namespace std;

int main ()
{
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
		int n, i, r = 1, tmp;
		
		cin>>n;
		
		int arr[n];
		
		for(i=0; i<n; i++)
			cin>>arr[i];
		
		sort(arr, arr+n);
		
		tmp = arr[0];
		
		for(i=0; i<n; i++)
		{
			if(arr[i]!=tmp)
			{
				tmp = arr[i];
				r++;
			}
		}	
		cout<<r<<endl;
	}
}
		
		
		