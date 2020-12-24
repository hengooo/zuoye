#include <stdio.h>
int n,a,k;
int age(int num)
{
 if(num==1)
 return a;
 else
 return age(num-1)+k;
}
 int main()
 {scanf("%d %d %d",&n,&a,&k);
  if(n>0&&a<=100&&k<=100&&n>=2&&a>0&&k>0)
   {printf("%d",age(n));}
  else
    printf("Wrong Number");
  return 0;
  }


