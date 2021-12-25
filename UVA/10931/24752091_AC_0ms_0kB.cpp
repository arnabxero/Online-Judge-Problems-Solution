//Arnab


#include<stdio.h>

int ch[3000];

int bin_conv(int n)
{
	int i = 0;
	
	while(n>0)
	{
		ch[i++] = n%2;
		n/=2;
	}
	return i;
}

int one_cnt(int n)
{
	int i, r = 0;
	
	for(i=0; i<n; i++)
	{
		if(ch[i]==1)
			r++;
	}
	return r;
}

void prnt(int n)
{
	int i;
	
	for(i=n-1; i>=0; i--)
		printf("%d", ch[i]);
		
}

int main ()
{
    int n;

    scanf("%d", &n);

    while(n!=0)
    {
        int len = bin_conv(n);
        
        int rslt = one_cnt(len);

        printf("The parity of ");
        prnt(len);
        printf(" is %d (mod 2).\n", rslt);

        scanf("%d", &n);
    }
}