#include<stdio.h>
#include<math.h>
int main(){
int n,m,i;
float j,s=0.5;
scanf("%d",&n);
for(i=0;i<n;i++) 
{scanf("%d",&m);
 if(m<0)
 printf("ERROR");
 else
 {j=pow(m,s);
  printf("%.2f",j);
 }
 printf("\n");
}
return 0;
} 
