#include<stdio.h>
#include<string.h>
int main(){
int n,i=0,j,s=0,g=0,m=0,k=0;
int l=1,da,len;
int c[100];
int deng[100];
char a[100][100],d[100][100],max[100][100],max1[100][100],A[100][100];
while(scanf("%s",&a[s])!=EOF)
{s++;} 
for(i=0;i<s;i++)
{len=strlen(a[i]);
 for(j=0;j<len;j++) 
{if(a[i][j]>='A'&&a[i][j]<='Z')
 a[i][j]=a[i][j]+32;
 if(a[i][j]>='a'&&a[i][j]<='z')
 A[i][j]=a[i][j];}
}
for(i=0;i<s;i++)
{for(j=i;j>=0;j--)
{if(strcmp(A[i],A[j])!=0)
 k++;}
 if(k==i)
 {for(j=i+1;j<s;j++)
  {if(strcmp(A[i],A[j])==0)
   {g++;}}
   c[m]=g+1;
   strcpy(d[m],A[i]);
   g=0;m++;
 }
 k=0;
}
for(i=0;i<m-1;i++)
{if(c[i]>c[i+1])
 {da=c[i];
 strcpy(max[0],d[i]);
  c[i]=c[i+1];
  strcpy(d[i],d[i+1]);
  c[i+1]=da;
  strcpy(d[i+1],max[0]); 
 }
 else
 da=c[i+1];
}
for(i=0;i<m-1;i++)
{if(da==c[i])
{strcpy(max[l],d[i]);
 l++;
}
}
if(l==1)
printf("%s %d",d[i],da);
else
for(i=0;i<l-1;i++)
{if(max[i][0]>max[i+1][0])
 {strcpy(max1[0],max[i]);
 strcpy(max[i],max[i+1]);
 strcpy(max[i+1],max1[0]);}
 printf("%s %d",max[i+1],da);
}
return 0；}

