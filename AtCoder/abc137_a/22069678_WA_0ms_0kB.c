#include<stdio.h>
int main ()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int x, y, z, bggst;
	
	x = a+b;
	y = a-b;
	z = a*b;
	//bggst = (x>y)?(x>z)?x:z:(y>z)?y:z;
	
	if(x>y && x>z)
		bggst = x;
	else if(y>x && y>z)
		bggst = y;
	else if(z>y && z>x)
		bggst = z;
	
	
	printf("%d\n", bggst);
	printf("The largest number among A+B=%d, A−B=%d, and A×B=%d is %d.", x, y, z, bggst);
	
	return 0;
}