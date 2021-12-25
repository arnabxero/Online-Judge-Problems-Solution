#include<stdio.h>

int main ()
{
	int n, i;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		int x;
		char ch[7];
		
		scanf("%d %s", &x, ch);
		
		if(ch[0]=='A')
		{
			if(x%2==0)
				printf("Case %d: Alice\n", i);
			else printf("Case %d: Bob\n", i);
		}
		else if(ch[0]=='B')
		{
			if(x%2==1)
				printf("Case %d: Alice\n", i);
			else printf("Case %d: Bob\n", i);
		}
	}
}