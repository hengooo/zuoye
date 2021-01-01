#include<stdio.h>
#include<string.h>
int main(){
char a[100];
int i,len,b,c,n,k,e,j;
k=0;
j=0;
scanf("%d",&n);
while(k<n){
scanf("%s",&a);
len=strlen(a);
printf("%d",len);
if(len%2==0){
  e=0;
  b=len/2;
  for(i=0;i<b;i++)
  {if(a[i]==a[len-1])
   {e++;}}
  if(e==b)
   printf("YES1\n");
  else
   printf("NO");}
else{
   j=0;
   c=(len-1)/2;
   for(i=0;i<c;i++)
   {if(a[i]==a[len-1])
    j++;}
   printf("%d",j);
   if(j==c)
    printf("YES2\n");
   else
    printf("NO2\n");}
 k++; }
}

