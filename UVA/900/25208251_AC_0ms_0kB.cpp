#include<bits/stdc++.h>

using namespace std;
 
int main()
{
        int F[55];
	F[0] = F[1] = 1;
	for ( int i = 2 ; i < 51 ; ++ i )
		F[i] = F[i-1] + F[i-2]; 
	int n;
	while ( cin >> n && n )
		cout << F[n] << endl;
	return 0;
}
