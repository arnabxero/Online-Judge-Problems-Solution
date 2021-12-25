#include<stdio.h>
int rev(int n)
{
	int r = 0, temp;
	
	while(n!=0)
	{
		temp = n%10;
		n /= 10;
		
		r = (r*10)+temp;
	}
return r;
}

int main()
{
	int n, n1, n2, rf, i;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d %d", &n1, &n2);

		rf = rev(rev(n1)+rev(n2));
		
		printf("%d\n", rf);
	}
	return 0;
}