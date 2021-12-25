#include<stdio.h>
#include<string.h>

int main ()
{
	char ch[100020];
	int i, r = 0;
	
	scanf("%s", ch);
	
	for(i=0; i<strlen(ch); i++)
	{
		if(ch[i]=='A' && ch[i+1]=='B' || ch[i]=='B' && ch[i+1]=='A')
			r = 1;
	}
	
	for(i=0; i<strlen(ch); i++)
	{
		if(ch[i]=='A' && ch[i+1]=='B' && ch[i+2]=='A')
		{
			r = 0;
			break;
		}
		if(ch[i]=='B' && ch[i+1]=='A' && ch[i+2]=='B')
		{
			r = 0;
			break;
		}
	}
	
	if(r==1)
		printf("YES");
	else printf("NO");
	
	
	return 0;
}