#include<stdio.h>
#include<string.h>

int main ()
{
	char ch[100010];
	int i, ans = 0;
	
	scanf("%s", ch);
	
	for(i=0; i<strlen(ch); i++)
	{
		
		if(ch[i]=='A')
		{
			if(ch[i+1]=='B')
				ans = 1;
			if(ch[i+2]=='A')
			{
				ans = 0;
			}
		}
		
		
		if(ch[i]=='B')
		{
			if(ch[i+1]=='A')
				ans = 1;
			if(ch[i+2]=='B')
			{
				ans = 0;
			}
		}
	}
	
	if(ans == 0)
		printf("NO");
	else printf("YES");
	
}