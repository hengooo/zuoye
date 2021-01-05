#include<stdio.h>
#include<string.h>
int main(){
int M,k,i;
int N;
char A[201];
char b[402];
scanf("%d\n",&M);//输入m，表示移动的位数 
fgets(A,201,stdin);//输入字符串，包括空格 
N=strlen(A);//计算字符串长度 
for(i=0;i<N;i++)
{b[i]=A[i];}//将字符串赋给b 
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
