//Away From Pc, So, Mobile Coded -_- -_- -_-

#include<stdio.h>

int main ()
{
	int x, y;
	double x1, y1;
	
	scanf("%d %d", &x, &y);
	y1 = y;
	
	int n = (x<=y)?1:0;
	
	int m = (x%5==0)?1:0;
	
	if(x<=y && x%5==0)
	{
		x1 = x, y1 = y;
		
		printf("%.2lf\n", y1-x1-0.50);
	}
		
	else printf("%.2lf\n", y1);
	
	return 0;
}
		
	
	