#include<stdio.h>
#include<string.h>
int main(){
int N;
double sum,average;
int i,j,k,s=0;
int b[100];
char ti[100][100];
char c[10]={"n/a"};
scanf("%d",&N);
for(i=0;i<N;i++)
{scanf("%s",&ti[i]) ;
k=strcmp(ti[i],c);
if(k!=0)
{for(j=0;j<strlen(ti[i]);j++)
 {if(ti[i][j]=='-')
  {b[i]=b[i]*10+ti[i][j]-'0'; //将char型转化为int型 
  b[i]=-b[i];}                //int型的数组=char型数组-'0' 
  else
  {b[i]=b[i]*10+ti[i][j]-'0';
   s++;}
 }
 }
 sum+=b[i];
}
average=sum/s;
if(s==0)
{printf("n/a");}
else
printf("%.2f",average);}
