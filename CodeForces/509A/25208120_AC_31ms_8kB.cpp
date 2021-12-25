#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, i, j;
	int a[11][11];
	for (i = 1; i <= 10; i++)
		a[1][i] = 1;
	for (i = 2; i <= 10; i++)
		a[i][1] = 1;
	for (i = 2; i <= 10; i++)
		for (j = 2; j <= 10; j++)
			a[i][j] = a[i][j - 1] + a[i - 1][j];
	cin >> n;
	cout << a[n][n] << endl;

}