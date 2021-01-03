#include<stdio.h>
#include<string.h>
int main(){
int a[100]={0},b[100]={0};
int m[100];
int n,i,j,l,s,d,t,num;
scanf("%d",&n);
for(i=0;i<n;i++)
{l=0;
while(1){
  scanf("%d",&num);
  char c=getchar();
  m[l]=num;
  l++;
  if(c=='\n')
  break; } //输入n个数字，用空格隔开，点击提行后结束输入 
s=0;t=0;
for(j=0;j<l;j++)
{if(m[j]%2==0)
{a[s]=m[j];
s++;}//将输入的数据分辨奇偶后分别存在数组a,b中 
else
{b[t]=m[j];
t++;}}
for(j=0;j<s;j++)
{if(a[j]>=a[j+1])
 {d=a[j];
 a[j]=a[j+1];
 a[j+1]=d;}}  //对偶数排序。 
for(j=0;j<t;j++)
{if(b[j]>=b[j+1])
 {d=b[j];
 b[j]=b[j+1];
 b[j+1]=d;}}  //对奇数排序。 
for(j=0;j<t;j++)
printf("%d ",b[j]);//输出奇 
for(j=0;j<s;j++)
printf("%d ",a[j]);//输出偶 
printf("\n");
}
return 0;
}

