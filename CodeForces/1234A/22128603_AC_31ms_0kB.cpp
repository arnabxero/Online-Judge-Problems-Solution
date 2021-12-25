#include<stdio.h>
int main()
{
	int n, t, i, j, sum;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &t);
		int p;
		sum = 0;
		for(j=0; j<t; j++)
		{
			scanf("%d", &p);
			sum += p;
		}
		int x = sum/t;

		if((t*x)<sum)
			x+=1;
		printf("%d\n", x);
	}
	return 0;
}