#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=a;
    while(a>=b){
        sum+=a/b;
        a=a/b+a%b;
    }
    printf("%d\n",sum);
}
