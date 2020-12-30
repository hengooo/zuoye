#include<stdio.h>
#include<string.h>
int i,j,k,d;
double average(char a[],int n)
{double sum=0;
for(i=0;i<n;i++)
{char c[10]={"n/a"};
k=strcmp(c,a);
if(k=0)
{sscanf(a,"%d",&d);
sum+=d;}
}
double re=sum/n;
return re;
}
int main(){
int N;
char b[100];
scanf("%d",&N);
for(j=0;j<N&&1<=N&&N<=100;j++)
{scanf("%s",&b);
average(b,N);}
printf("%.2f",average(b,N));
}

