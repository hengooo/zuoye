#include<stdio.h>
int main(){
int n,i,j,c,d,e,f,t;
j=0; 
int a[10];
scanf("%d",&n);
while(j<n){
for(i=0;i<3;i++)
  scanf("%d",&a[i]); 
i=0;
c=a[0];d=a[1];e=a[2];
if(c>d)
{f=c;
 c=d;
 d=t;
}//判断大小后交换使小的为前一个 
if(c>e)
{f=c;
 c=e;
 d=t;
}
if(d>e)
{f=d;
 d=e;
 e=t;
}//共需两两比较进行三次 

printf("%d",d);
if(e*e==d*d+c*c)//记住，判断等于一定要打两个等号 
   printf("Yes\n");
else
   printf("No\n");
j++;
}
} 
