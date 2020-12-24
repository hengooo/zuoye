#include<stdio.h>
#include<math.h>//函数头文件。 
int main() 
{int a[100],i,n,m,x,y,z,q,e,w,o,c,k,j; 
 int b[100];
 m=0;
 w=1;
 c=0;
 j=2;
{for(o=0;w>0;o++)
 {k=5*o;
  w=0;
  for(i=0+k;i<5+k;i++)
  scanf("%d",&a[i]);
  for(i=0+k;i<5+k;i++)
  {if(a[i]!=0)
  w++;}}
 while(c<k)
{n=0;
 y=0;
 q=0;
 x=0;
if(w==0)
{ for(i=0+c;i<3+c;i++)
 {if(a[i+2]+a[i]==2*a[i+1])
    n++;}
 if(n==3)
 {printf("case one\n");
  for(i=4+c;i<9+c;i++)
  {y++;
   e=a[4+c]-a[3+c];
   printf("%d ",a[4+c]+e*y);}
	printf("\n");
	}
}i=0;
 y=0;
if(w==0){
for(i=0+c;i<3+c;i++)
 {if(a[i+2]==a[i+1]+a[i])
	q++;}
 if(q==3)
 {printf("case three\n");
  for(i=4+c;i<9+c;i++)
  {b[0]=a[3+c];
   b[1]=a[4+c];
   b[j]=b[j-2]+b[j-1];
   printf("%d ",b[j  ]);j++;}
	  printf("\n");
	 } 
}i=0;
 y=0;
if(w==0){
for(i=0+c;i<3+c;i++){
    if((a[i+2]*a[i])==(a[i+1]*a[i+1]))
    x++;}
  if(x==3)
	{x=a[i]/a[i-1];
	printf("case two\n");
 	for(i=4+c;i<9+c;i++)
 	{y++;
 	 z=pow(x,y);//函数头文件中的函数pow（a,b）表示a的b次方。
	  printf("%d ",a[4+c]*z);
	 }
	 printf("\n");
	 }
}i=0;
 y=0;
m++;
c=m*5;
}}
return 0;
}/*for(i=0;i<3;i++){
     q=0;
	 if(a[i+2]==a[i+1]+a[i])
	 q++;
	 }
	if(q=3)
	  {printf("case two\n");
	  for(i=4;i<9;i++)
	 {printf("%d ",a[i-2]+a[i-1]);}
	  printf("\n");
	  i=0;}
for(i=0;i<3;i++){
    if((a[i+2]/a[i])==(a[i+1]*a[i+1]))
    x=(a[i+1]/a[i]);}
  if(x=(a[i+1]/a[i]))
	{printf("case three\n");
 	for(i=4;i<9;i++)
 	{y++;
 	 z=pow(x,y);//函数头文件中的函数pow（a,b）表示a的b次方。 
 	 printf("%d ",a[4]*z);
	 }
	 printf("\n");
	 i=0;}
	 if(a[i]==a[i+1]==a[i+2]==a[i+3]==a[i+4]==0)*/
