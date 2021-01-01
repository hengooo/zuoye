//排列大小及输入隔空格的不确定个数整数
#include<stdio.h>
int main(){
int a[500]={0},b[500]={0};
int m[500];
int n,i,j,l,s,d,t,num,u;
scanf("%d",&n);
for(i=0;i<n;i++)
{l=0;
while(1){
  scanf("%d",&num);
  char c=getchar();//getchar读入scanf的最后一次输入赋给c
  m[l]=num;
  l++;//表示个数
  if(c=='\n')//如果c为提行表示已经点击回车键
  break; }//如何输入不确定个数的整数并用空格隔开
s=0;t=0;
for(j=0;j<l;j++)
{if(m[j]%2==0)
{a[s]=m[j];
s++;}
else
{b[t]=m[j];
t++;}}//判断奇偶并计算奇偶的个数
for(u=0;u<s-1;u++)
{for(j=0;j<s-u-1;j++)//如果把这两行只简单使用一行，则只能求出最值
{if(a[j]>=a[j+1])
 {d=a[j];
 a[j]=a[j+1];
 a[j+1]=d;}}
}//多次循环比较，按从小到大排列整数
for(u=0;u<t-1;u++)
{for(j=0;j<t-u-1;j++)
{if(b[j]>=b[j+1])
 {d=b[j];
 b[j]=b[j+1];
 b[j+1]=d;}}
}//同上
for(j=0;j<t;j++)
printf("%d ",b[j]);
for(j=0;j<s;j++)
printf("%d ",a[j]);
printf("\n");
}
return 0;
}

