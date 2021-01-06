
#include<stdio.h>
#include<string.h>
int main(){
int n,i,j,len,da,s=1,h=0,k=0;
char li[10];
char c[100][10];
char z[10]={"n/a"};
int gra[100]={0},pai[100];
char name[30][100],b[100][100],max[100][100],max1[100][100];
scanf("%d",&n);
scanf("%s",&li);
for(i=0;i<n;i++)
{scanf("%s",&name[i]);
 scanf("%s",&b[i]);
 scanf("%s",&c[i]);
}
for(i=0;i<n;i++)
{if(strcmp(c[i],z)!=0)
{len=strlen(c[i]);
 for(j=0;j<len;j++)
 {gra[i]=gra[i]*10+c[i][j]-'0';
  } 
}
else 
 gra[i]=-1;
} 
for(i=0;i<n-1;i++)
{for(j=0;j<n-i-1;j++)
 if(gra[j]>gra[j+1])
 {da=gra[j];
  strcpy(max[0],name[j]);
  strcpy(max1[0],b[j]);
  gra[j]=gra[j+1];
  strcpy(name[j],name[j+1]);
  strcpy(b[j],b[j+1]);
  gra[j+1]=da;
  strcpy(name[j+1],max[0]);
  strcpy(b[j+1],max1[0]);
 }
}
for(i=n-1;i>=0;i--)
{if(gra[i]>gra[i-1])
 {pai[i]=s;
 s++;}
 else if(gra[i]==gra[i-1])
 pai[i]=s;
 else
 pai[i]=0;
}
for(i=0;i<n;i++)
{for(j=0;j<strlen(name[i]);j++)
  {if(li[k]==name[i][j])
   {
   k++;}}
 for(j=0;j<strlen(b[i]);j++)
  {if(li[h]==b[i][j])
   {h++;}}
 if(k==strlen(li)||h==strlen(li))
 {if(pai[i]!=0)
  printf("%s %s %d %d\n",name[i],b[i],gra[i],pai[i]);
  else
  printf("%s %s %d n/a\n",name[i],b[i],gra[i]);}
 else
 continue;
 h=0;
 k=0;
}

} 
