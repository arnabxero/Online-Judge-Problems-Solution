#include<stdio.h>
#include<string.h>

int main ()
{
	int n, l;
	scanf("%d", &n);
	
	for(l=0; l<n; l++)
	{
		char ch[110];
		int x = -4, y = -3, i, cnt = 0;
		
		scanf(" %s", ch);
		int len = strlen(ch);
		
		for(i=0; i<len; i++)
			if(ch[i] == '1')
			{
				x = i;
				break;
			}
			
		for(i=len-1; i>=0; i--)
			if(ch[i] == '1')
			{
				y = i;
				break;
			}
		if(x==-4 && y==-3)
			printf("0\n");
		else 
		{
			for(i=x; i<=y; i++)
				if(ch[i] == '0')
					cnt++;
			printf("%d\n", cnt);
		}
	}
}
			
			