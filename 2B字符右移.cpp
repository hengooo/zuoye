#include<stdio.h>
#include<string.h>
int main(){
int M,k,i;
int N;
char A[201];
char b[402];
scanf("%d\n",&M);//����m����ʾ�ƶ���λ�� 
fgets(A,201,stdin);//�����ַ����������ո� 
N=strlen(A);//�����ַ������� 
for(i=0;i<N;i++)
{b[i]=A[i];}//���ַ�������b 
if(M<N)
{strcat(b,A);
 k=N-M;
{for(i=k-1;i<2*N-M-1;i++)
 {if(b[i]!='\n')
 printf("%c",b[i]);}
}}
else if(M>=N)
{strcat(b,A);
 M=M%(N-1);
 k=N-M;
{for(i=k-1;i<2*N-M-1;i++)
 {if(b[i]!='\n')
 printf("%c",b[i]);}
}}
return 0;
} 
