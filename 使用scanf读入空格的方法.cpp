#include<stdio.h>
#include<string.h>
int main(){
int M,n,i;
int len;
char A[200];
char b[200];
scanf("%d\n",&M);
scanf("%[^\n]",&A);// ʹscanf������ַ����������з���ֹͣ���롣 
len=strlen(A);
for(i=0;i<len;i++)
{b[i]=A[i];}
n=len-M;
if(M>=0)
strcat(b,A);
{for(i=n;i<2*len-M;i++)
 printf("%c",b[i]);
}
return 0;

} 
