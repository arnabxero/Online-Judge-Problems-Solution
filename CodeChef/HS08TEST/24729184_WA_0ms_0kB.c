#include<stdio.h>

int main ()
{
	int x, y;
	double x1, y1;
	
	scanf("%d %d", &x, &y);
	
	y1 = (double)y, x1 = (double)x;
	
	if((x+1)<=y && x%5==0)
	{
		printf("%.2lf\n", y1-x1-0.50);
	}
		
	else printf("%.2lf\n", y1);
	
	return 0;
}
		
	
	