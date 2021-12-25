#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll Call_Sol(ll x)
{
	ll y, z, rslt = 0, m = 1;

	while(m<=x)
    {
		z = x/m;
		y = x/z;
        int temp = z*((m+y)*(y-m+1)/2);
		rslt+=temp;
		m = y+1;
	}
	return (rslt-1);
}
int main()
{
	ll x;

	while(scanf("%lld", &x)==1)
    {
        if(x==0)
            break;

		printf("%lld\n", Call_Sol(x));
	}
}

