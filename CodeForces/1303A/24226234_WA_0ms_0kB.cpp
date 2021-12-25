#include<stdio.h>
#include<string.h>
int main ()
{
	int n, i;
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		char ch[110], cc;
		scanf(" %s", ch);
		
		int j, cnt = 0, ck = 0, ck2 = 0, len = strlen(ch);
		
		for(j=0; j<len; j++)
		{
			if(ch[j] == '1')
				ck = 1;
			if(ck==1 && ch[j] == '0')
				cnt++;
			if(ck == 1 && ch[j] == '1' && cnt>0)
				ck2 = 1;
		}
		if(ck2 == 0)
			cnt = 0;
			
		printf("%d\n", cnt);
	}
}