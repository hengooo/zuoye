#include<stdio.h>
#include<string.h>
int main(){
char a[500][500];
int i=0,n=0,j,c,t,s;
char g[500][500];
while(1){
scanf("%s",&a[i]);//输入未知个数字符串，
char c=getchar();//getchar()读入scanf的最后字符（例如空格，换行），赋给c 
i++;
n++;
if(c=='\n')      //如c为换行符，输入循环结束，跳出程序 
break;}          //一共n个字符串 
for(i=0;i<n;i++)
{s=0;
 c=strlen(a[i]);//计算处于循环中的字符串长度 
for(j=0;j<c;j++)
{if(a[i][j]>='a'&&a[i][j]<='z'||a[i][j]>='A'&&a[i][j]<='Z')
{g[i][s]=a[i][j];
 s++;}}              //对第i组字符串里的字符进行判断，
for(j=0;j<=s/2-1;j++)//为字母赋给数组g，不为不变。数组g从0开始记  
{t=g[i][j];
 g[i][j]=g[i][s-j-1];
 g[i][s-j-1]=t;}    //对数组g进行颠倒 
 s=0;
for(j=0;j<c;j++)
{if(a[i][j]>='a'&&a[i][j]<='z'||a[i][j]>='A'&&a[i][j]<='Z')
 {a[i][j]=g[i][s];
  s++;}           //判断数组a是否为字母，如是，将颠倒后的 
 else             // 数组g依次替换原来相应位置的数组a的字符；
 a[i][j]=a[i][j];}//不是，则a对应中字符不变 
 }
for(i=0;i<n;i++)
printf("%s ",a[i]);//循环结束后，一组一组输出改变后的字符串a
}                  //用空格隔开 

