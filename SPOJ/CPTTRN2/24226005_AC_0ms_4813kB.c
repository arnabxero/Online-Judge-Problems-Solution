#include<stdio.h>
int main ()
{
	int t, l;
	scanf("%d", &t);
	
	for(l=0; l<t; l++)
	{
		int i, j, x, y;
		scanf("%d %d", &x, &y);
		
		for(i=0; i<x; i++)
		{
			for(j=0; j<y; j++)
			{
				if(i == 0 || i== x-1 || j == 0 || j == y-1)
					printf("*");
				else printf(".");
				
			}
			printf("\n");
		}
	}
}