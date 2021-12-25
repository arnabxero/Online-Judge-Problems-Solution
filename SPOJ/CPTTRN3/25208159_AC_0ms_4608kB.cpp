#include<bits/stdc++.h>
void pattern(){
 for(int j=0;j<4;j++){
 
 if(j==0||j==3)
       printf("*");
       else
       printf(".");
 }
}
int main()
{
   int t,k,temp;
   int l,c,i=0,j=0;
   scanf("%d",&t);
   while(t--){ 
     scanf("%d %d",&l,&c);
 for(i=0;i<=(l*2);i++){
  if(i%2==0){
  for(j=0;j<=(c*3);j++)
   printf("*");
  printf("\n");
 }
   if(i!=(l*2)){
   for(j=0;j<=(c*3);j++){
    if(j%3==0)
     printf("*");
    else
     printf(".");
  }
}
  printf("\n");
  
 }
 
   }
return 0;}