#include<stdio.h>
#include<string.h>
int main(){
int  n,i,j,k,s=0,x=1,v=1;
char a[100][100];
char c[10]={"n/a"};
int b[100]={0};
int bi[100];
int bi1[100];
int xiao,da;
char max[100][100],mm[100][100],mmm[100][100];
char min[100][100],xx[100][100],xxx[100][100];
char d[100][100],l[100][100];
char e[100][100],g[100][100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
 for(j=0;j<3;j++)
 {scanf("%s",&a[j]);}//һ��һ������������ѧ�ţ��ɼ������ݣ� Ϊa0,a1,a2 
 if(strcmp(a[2],c)!=0)//�жϳɼ��Ƿ���Ч����Ч��ȡ�� 
 {for(k=0;k<strlen(a[2]);k++) 
  {b[i]=b[i]*10+a[2][k]-'0';}//���ɼ��ַ���ת��Ϊ����
  bi[s]=b[i];                
  bi1[s]=b[i];       //���ɼ�����bi�����bi1���������ں���ıȽϴ�С
  strcpy(d[s],a[0]);
  strcpy(l[s],a[0]);
  strcpy(g[s],a[1]); 
  strcpy(e[s],a[1]); //ͬ��ÿһ���������ѧ�ŷֱ𸳸�d/l,g/e���� 
  s++;           //����s��һ�Լ�����Ч�������� 
  b[i]=0;}       //���һ���ַ���ת���ͺ����ڴ������͵������������Ӱ����һ��ת�� 
  else continue;//����Ч�����ѭ�� 
 }
 for(j=0;j<s-1;j++)
 {if(bi[j]>bi[j+1])
  {da=bi[j];
  strcpy(max[0],d[j]);
  strcpy(max[1],e[j]);
  bi[j]=bi[j+1];
  strcpy(d[j],d[j+1]);
  strcpy(e[j],e[j+1]);
  bi[j+1]=da;
  strcpy(d[j+1],max[0]);//�Ƚ�;�н�����ѧ�ŵ���Ϣ��Ӧ�ɼ�ת�� 
  strcpy(e[j+1],max[1]);//������ֻ��һ��for�ľͱ�ʾ����ֵ���� 
  }                     //��ȡ����ֵ��󽫴������������ó����Ƚ� 
  else if(bi[j]==bi[j+1])
  {strcpy(max[0+2*x],d[j+1]);
   strcpy(d[j+1],d[j]);
   strcpy(max[1+2*x],e[j+1]);
   strcpy(e[j+1],e[j]);//�����ȣ��� j+1����������Ϣ������max��0��/max��1����
   x++;                //�ٽ�������������j����������Ӱ����������ݵıȽ� 
  }
  else if(bi[j]<bi[j+1])
  {strcpy(max[0],d[j+1]);
  strcpy(max[1],e[j+1]);
  x=1;}               //��С�ڡ������ݲ����� 
 }
 for(j=0;j<s-1;j++)
 {if(bi1[j]<bi1[j+1])
  {xiao=bi1[j];
   strcpy(min[0],l[j]);
   strcpy(min[1],g[j]);
   bi1[j]=bi1[j+1];
   strcpy(l[j],l[j+1]);
   strcpy(g[j],g[j+1]);
   bi1[j+1]=xiao;
   strcpy(l[j+1],min[0]);
   strcpy(g[j+1],min[1]);
  }
  else if(bi1[j]==bi1[j+1])
  {strcpy(min[0+2*v],l[j+1]);
   strcpy(l[j+1],l[j]);
   strcpy(min[1+2*v],g[j+1]);
   strcpy(g[j+1],g[j]);
   v++;
  }
  else if(bi1[j]>bi1[j+1])
  { strcpy(min[0],l[j+1]);
   strcpy(min[1],g[j+1]);
  v=1;}
 }                        //����Сͬ�� 
 for(j=0;j<x-1;j++)
 {for(i=0;i<x-j-1;i++)
 {if(max[0+2*i][0]>max[0+2*(i+1)][0])
  {strcpy(mm[0],max[0+2*i]);
  strcpy(mmm[0],max[1+2*i]);
  strcpy(max[0+2*i],max[0+2*(i+1)]);
  strcpy(max[1+2*i],max[1+2*(i+1)]);
  strcpy(max[0+2*(i+1)],mm[0]);
  strcpy(max[1+2*(i+1)],mmm[0]);}}}  //����������for�ģ����Ǵ�С���� 
  printf("%s %s\n",max[0],max[1]);   //����������ֵ��ͬ��������һ��ѭ�� 
  for(j=0;j<v-1;j++)
 {for(i=0;i<v-j-1;i++)
 {if(min[0+2*i][0]<min[0+2*(i+1)][0])
  {strcpy(xx[0],min[0+2*i]);
  strcpy(xxx[0],min[1+2*i]);
  strcpy(min[0+2*i],min[0+2*(i+1)]);
  strcpy(min[1+2*i],min[1+2*(i+1)]);
  strcpy(min[0+2*(i+1)],xx[0]);
  strcpy(min[1+2*(i+1)],xxx[0]);}}}
 printf("%s %s\n",min[0],min[1]);
 }

