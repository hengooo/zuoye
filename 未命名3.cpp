#include<stdio.h>
#include<string.h>
int main(){
int M,k=0,i;
int N;
char A[201];
char b[402];
scanf("%d\n",&M);//����m����ʾ�ƶ���λ�� 
fgets(A,201,stdin);//�����ַ����������ո� 
N=strlen(A);//�����ַ������� 
if(M<N){
for(i=N-2;i>=N-M-1;i--)
{b[k]=A[i];
 k++;
 printf("%s",b[k]); }
 for(i=0;i<=N-M-2;i++)
 printf("%s",A[i]);}
else if(M>=N)
{M=M%N;
for(i=N-2;i>=N-M-1;i--)
{b[k]=A[i];
 k++;
 printf("%s",b[k]); }
 for(i=0;i<=N-M-2;i++)
 printf("%s",A[i]);}

return 0;
} 
