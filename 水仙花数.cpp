#include<stdio.h>
int main(){
int T,m,n,j,i,l,t;
int bai,shi,ge;
int a[500];
scanf("%d",&T);//����T��ʾT������
for(i=0;i<T;i++)//����ѭ��
{l=0;
 scanf("%d%d",&m,&n);//����mn
if(100<=m&&m<=n&&n<=999)//�жϵ���mn�Ƿ�����
{for(j=m;j<=n;j++)
 {bai=j/100;
  ge=j%100;
  shi=ge/10;
  ge=ge%10;//�ֱ����λʮλ��λ
 if(j==bai*bai*bai+shi*shi*shi+ge*ge*ge)
  {a[l]=j;
   l++;}}}//����ˮ�ɻ����������䴢��������a��
if(100<=m&&m<=n&&n<=999)
{if(l==0)
 printf("-1");//���lΪ�㣬��ʾû��ˮ����
else
 {for(j=0;j<l;j++)
printf("%d ",a[j]);//�������㣬lΪ���٣����м���ˮ�������������
printf("\n");}}}
}

