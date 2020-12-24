#include<stdio.h>
#include<string.h>
int main() 
{int i=7;
 char b[16]={0};
 char a[16]={0};
 scanf("%s",&a);
 printf("%x%x%c%c%c%c%c",(unsigned char)a[0],
 (unsigned char)a[1],(unsigned char)a[2],(unsigned char)a[3],(unsigned char)a[4],
 (unsigned char)a[5],(unsigned char)a[6],(unsigned char)a[7]);
if((unsigned char)a[i]>0x7E)
 printf("%x%x",(unsigned char)a[i],(unsigned char)a[i+1]);
else
 printf("%c",(unsigned char)a[i]);
 return 0;
}
