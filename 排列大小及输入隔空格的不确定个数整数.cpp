//���д�С��������ո�Ĳ�ȷ����������
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
  char c=getchar();//getchar����scanf�����һ�����븳��c
  m[l]=num;
  l++;//��ʾ����
  if(c=='\n')//���cΪ���б�ʾ�Ѿ�����س���
  break; }//������벻ȷ���������������ÿո����
s=0;t=0;
for(j=0;j<l;j++)
{if(m[j]%2==0)
{a[s]=m[j];
s++;}
else
{b[t]=m[j];
t++;}}//�ж���ż��������ż�ĸ���
for(u=0;u<s-1;u++)
{for(j=0;j<s-u-1;j++)//�����������ֻ��ʹ��һ�У���ֻ�������ֵ
{if(a[j]>=a[j+1])
 {d=a[j];
 a[j]=a[j+1];
 a[j+1]=d;}}
}//���ѭ���Ƚϣ�����С������������
for(u=0;u<t-1;u++)
{for(j=0;j<t-u-1;j++)
{if(b[j]>=b[j+1])
 {d=b[j];
 b[j]=b[j+1];
 b[j+1]=d;}}
}//ͬ��
for(j=0;j<t;j++)
printf("%d ",b[j]);
for(j=0;j<s;j++)
printf("%d ",a[j]);
printf("\n");
}
return 0;
}

