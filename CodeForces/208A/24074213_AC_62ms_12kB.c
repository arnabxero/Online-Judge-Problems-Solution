#include<stdio.h>
#include<string.h>

int main ()
{
	char ch[205];
	int i;
	
	scanf("%s", ch);
	
	for(i=0; i<strlen(ch); i++)
	{
		if(i>0 && ch[i]=='W' && ch[i+1]=='U' && ch[i+2]=='B')
			printf(" ");
			
		if(ch[i]=='W' && ch[i+1]=='U' && ch[i+2]=='B')
					i+=2;
		else 
		{
			printf("%c", ch[i]);
		}
	}
	return 0;
}
						
						
	