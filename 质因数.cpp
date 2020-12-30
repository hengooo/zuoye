#include <stdio.h>
int main(){
int n,a,k,i,j;
scanf("%d",&a);
for(k=0;k<a;k++)
{
scanf("%d",&n);
for(i=2;i<n/2;)
{if(n%i==0)
 {printf("%d",i);
  printf("*");
  n=n/i;}
 else
 i++;
 } 
 printf("%d\n",n);
} }
