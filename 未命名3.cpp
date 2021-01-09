#include<stdio.h>
#include<string.h>
int main(){
int M,k=0,i;
int N;
char A[201];
char b[402];
scanf("%d\n",&M);//输入m，表示移动的位数 
fgets(A,201,stdin);//输入字符串，包括空格 
N=strlen(A);//计算字符串长度 
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
