#include<stdio.h>
int sum_number(int a[],int n)//n表示啊a数组的长度 ，a,n均为形参 
{  int i,sum=0;
   for(i=0;i<n;i++)
     sum+=a[i];
 return sum;
 } //首先完成加法函数的定义 
int main(void){
	int b[10],total,m,i;//参数声明。 
	scanf("%d",&m);
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);
	total=sum_number(b,m);//调用定义的加法函数 ,并用实际参数b,m赋值于形参。 
   printf("%d",total);
}  
