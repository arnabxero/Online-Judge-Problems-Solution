#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;

	cin>>t;

	while(t--)
	{
	    int n, i;

		cin>>n;

		int arr[n*2+20];

		for(i=1;i<=2*n;i++)
            cin>>arr[i];

		sort(arr+1,arr+1+2*n);

		cout<<abs(arr[n]-arr[n+1])<<endl;
	}
	return 0;
}
