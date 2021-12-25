#include <stdio.h>
int a[5];
int main(){
	int t,ans,i,j,tmp;
	scanf("%d",&t);
	while(t--){
		ans=0;
		for(i=1;i<=3;i++)scanf("%d",&a[i]);
		for(i=1;i<=3;i++)
			if(a[i])a[i]--,ans++;
		for(i=1;i<=3;i++)
			for(j=i+1;j<=3;j++)
				if(a[i]<a[j])tmp=a[i],a[i]=a[j],a[j]=tmp;
		if(a[1]&&a[2])a[1]--,a[2]--,ans++;
		if(a[1]&&a[3])a[1]--,a[3]--,ans++;
		if(a[2]&&a[3])a[2]--,a[3]--,ans++;
		if(a[1]&&a[2]&&a[3])ans++;
		printf("%d\n",ans);
	}
	return 0;
}
