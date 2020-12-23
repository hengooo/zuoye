#include<stdio.h>
#include<string.h>
int main(){
int r,c,i,j,d,e,m,n,f,q;
int k1,k2,k3,k4,k5,k6;
int a[100][100]={00};
char b[10];
char g1[3]="SR";
char g2[3]="SC";
char g3[3]="DR";
char g4[3]="DC";
char g5[3]="IR";
char g6[3]="IC";
scanf("%d%d",&r,&c);
if(r>=1&&c<=50)
{for(i=1;i<r+1;i++)
{for(j=1;j<c+1;j++)
  {scanf("%d",&a[i][j]);} }}
scanf("%d\n",&n);
q=0;
while(q<n){
scanf("%s",b);
k1=strcmp(b,g1);
k2=strcmp(b,g2);
k3=strcmp(b,g3);
k4=strcmp(b,g4);
k5=strcmp(b,g5);
k6=strcmp(b,g6);
if(k1==0)
{scanf("%d%d",&f,&m);
 getchar();//吸收输入fm后点击的回车键避免对循环造成影响。如不加，会导致多一次循环，输入完后的空格同理会造成影响。
 for(i=1;i<c+1;i++)
 {d=a[f][i];
 e=a[m][i];
 a[f][i]=e;
 a[m][i]=d;}
 }//交换f与m行
if(k2==0)
{scanf("%d%d",&f,&m);
 getchar();
 for(i=1;i<r+1;i++)
 {d=a[i][f];
  e=a[i][m];
  a[i][f]=e;
  a[i][m]=d;}
  }//交换f与m列
if(k3==0)
{scanf("%d",&f);
 getchar();
 for(j=1;j<c+1;j++)
  {for(i=f;i<r;i++)
   a[i][j]=a[i+1][j];}
r=r-1;
}删除f行
if(k4==0)
{scanf("%d",&f);
 getchar();
 for(i=1;i<r+1;i++)
  {for(j=f;j<c;j++)
   a[i][j]=a[i][j+1];}
c=c-1;
}
if(k5==0)
{scanf("%d",&f);
 getchar();
 for(j=1;j<c+1;j++)
  {for(i=r;i>f-1;i--)
   {a[i+1][j]=a[i][j];}
  a[f][j]=0;}
r=r+1;
}//在f行前添加一行全为0
if(k6==0)
{scanf("%d",&f);
 getchar();
 for(i=1;i<r+1;i++)
  {for(j=c;j>f-1;j--)
   {a[i][j+1]=a[i][j+1];}
  a[i][f]=0;}
c=c+1;
}
q++;
}
for(i=1;i<r+1;i++)
 {for(j=1;j<c+1;j++)
    {printf("%d ",a[i][j]);}
    printf("\n");}
 return 0;
}

