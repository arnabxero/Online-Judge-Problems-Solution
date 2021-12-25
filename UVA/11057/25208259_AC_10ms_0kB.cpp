#include <bits/stdc++.h>
 
using namespace std;
 
int data[10012];

int bs( int r, int key )
{
	int mid,l = 0;
	while ( l < r ) {
		mid = l+(r-l)/2;
		if ( data[mid] <= key )
			l = mid+1;
		else r = mid;
	}
	return r;
}
 
int main()
{
	int n,sum;
	while ( ~scanf("%d",&n) ) {
		for ( int i = 0 ; i < n ; ++ i )
			scanf("%d",&data[i]);
		data[n] = 1000002;
		scanf("%d",&sum);
		sort( data, data+n );
		int s = bs( n, sum/2 );
		if ( s >= 2 && data[s-1]+data[s-2] == sum ) 
			printf("Peter should buy books whose prices are %d and %d.\n\n",data[s-2],data[s-1]);
		else {
		int l = s-1,r = s;
			while ( l >= 0 && r < n ) {
				if ( data[l]+data[r] == sum ) {
					printf("Peter should buy books whose prices are %d and %d.\n\n",data[l],data[r]);
					break;
				}else if ( data[l]+data[r] < sum )
					r ++;
				else l --;
			}
		}
	}
	return 0;
}
