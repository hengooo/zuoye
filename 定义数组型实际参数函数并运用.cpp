#include<stdio.h>
int sum_number(int a[],int n)//n��ʾ��a����ĳ��� ��a,n��Ϊ�β� 
{  int i,sum=0;
   for(i=0;i<n;i++)
     sum+=a[i];
 return sum;
 } //������ɼӷ������Ķ��� 
int main(void){
	int b[10],total,m,i;//���������� 
	scanf("%d",&m);
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);
	total=sum_number(b,m);//���ö���ļӷ����� ,����ʵ�ʲ���b,m��ֵ���βΡ� 
   printf("%d",total);
}  
