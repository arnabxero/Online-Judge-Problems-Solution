#include<stdio.h>
int main ()
{
	int n, i, cnt = 0;
	scanf("%d", &n);
	
	char ch[n], c;
	
	scanf("%s", &ch);
	
	c = ch[0];
	
	for(i=1; i<n; i++)
	{
		if(ch[i] == c)
			cnt++;
			
			c = ch[i];
	}
	printf("%d", cnt);
	
}
			