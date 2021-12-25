#include<iostream>

using namespace std;

void sort(int arr[], int n)
{
	int i, j, tmp;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(arr[i]>arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

	
int main ()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, i, r = 1, tmp;
		
		cin>>n;
		
		int arr[n];
		
		for(i=0; i<n; i++)
			cin>>arr[i];
		
		sort(arr, n);
		
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
		
		
		