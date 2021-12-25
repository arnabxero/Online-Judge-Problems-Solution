#include<bits/stdc++.h>
using namespace std;
const int maxn = 105;
int mor[maxn];
int aft[maxn];
int main()
{
	int n, d, r;
	while (cin >> n >> d >> r)
	{
		if (!n && !d && !r) return 0;
		memset(mor, 0, maxn);
		memset(mor, 0, maxn);
		int res = 0;
		for (int i = 0; i < n; i++)
			cin >> mor[i];
		for (int i = 0; i < n; i++)
			cin >> aft[i];
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (mor[i] < mor[j])
				{
					int t = mor[i];
					mor[i] = mor[j];
					mor[j] = t;
				}
			}
			for (int j = i + 1; j < n; j++)
			{
				if (aft[i] > aft[j])
				{
					int t = aft[i];
					aft[i] = aft[j];
					aft[j] = t;
				}
			}
		}
		//for (int i = 0; i < n; i++)

		//cout << endl;
		//for (int i = 0; i < n; i++)
		//	cout << aft[i] << " ";
		//cout << endl;
		for (int i = 0; i < n; i++)
		{
			if (mor[i] + aft[i] > d)
				res += (aft[i] + mor[i] - d);
		}
		cout << res * r << endl;
	}
	return 0;
}
