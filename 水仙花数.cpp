#include<stdio.h>
int main(){
int T,m,n,j,i,l,t;
int bai,shi,ge;
int a[500];
scanf("%d",&T);//输入T表示T组数据
for(i=0;i<T;i++)//进行循环
{l=0;
 scanf("%d%d",&m,&n);//输入mn
if(100<=m&&m<=n&&n<=999)//判断调剂mn是否满足
{for(j=m;j<=n;j++)
 {bai=j/100;
  ge=j%100;
  shi=ge/10;
  ge=ge%10;//分别求百位十位个位
 if(j==bai*bai*bai+shi*shi*shi+ge*ge*ge)
  {a[l]=j;
   l++;}}}//满足水仙花条件，将其储存在数组a中
if(100<=m&&m<=n&&n<=999)
{if(l==0)
 printf("-1");//如果l为零，表示没有水仙数
else
 {for(j=0;j<l;j++)
printf("%d ",a[j]);//不等于零，l为多少，就有几个水仙数并依次输出
printf("\n");}}}
}

