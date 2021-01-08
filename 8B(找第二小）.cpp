#include<stdio.h>
int main(){
int n,i,j,m,s,g=0,h=0,da;
int a[100],d[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&m);
 for(j=0;j<m;j++)
 {scanf("%d",&a[j]);}
 for(j=0;j<m;j++)
 {for(s=j;s>=0;s--)
  {if(a[j]!=a[s])
   g++;
  }
  if(g==j)
  {d[h]=a[j];
  h++;}
  g=0;
 }
 if(h<=1)
 printf("ERROR\n");
 else
{ for(j=0;j<h-1;j++)
 {for(s=0;s<h-j-1;s++)
  {if(d[s]>d[s+1])
   {da=d[s];
    d[s]=d[s+1];
    d[s+1]=da; }
  }
 }
 printf("%d\n",d[1]);}
 h=0;}
return 0;
}
