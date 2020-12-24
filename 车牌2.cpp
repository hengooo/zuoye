#include<stdio.h>
int main()
{int i=0;
 char a[66]={0};
 scanf("%s",a);
 while(a[i]!=0){
 	if((unsigned)a[i]>0x7e)
 	  {if((unsigned)a[i]==0xffffffb4 && (unsigned)a[i+1]==0xffffffa8)//其中0x表示十六进制，f为16进制中的15. 
 	   {printf("%x",0XE5B79D);
 	  i+=2; }
	   else if((unsigned)a[i]==0xffffffbe && (unsigned)a[i+1]==0xffffffa9)
	   {printf("%x",0XE4BAAC);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffbd && (unsigned)a[i+1]==0xfffffff2)
	   {printf("%x",0XE6B4A5);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffbb && (unsigned)a[i+1]==0xffffffa6)
	   {printf("%x",0XE6B2AA);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffd3 && (unsigned)a[i+1]==0xffffffe5)
	   {printf("%x",0XE6B89D);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffbc && (unsigned)a[i+1]==0xffffffbd)
	   {printf("%x",0XE58680);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffbd && (unsigned)a[i+1]==0xfffffffa)
	   {printf("%x",0XE6998B);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffc1 && (unsigned)a[i+1]==0xffffffc9)
	   {printf("%x",0XE8BEBD);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffbc && (unsigned)a[i+1]==0xffffffaa)
	   {printf("%x",0XE59089);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffd4 && (unsigned)a[i+1]==0xffffffa5)
	   {printf("%x",0XE8B1AB);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffcb && (unsigned)a[i+1]==0xffffffd5)
	   {printf("%x",0XE88B8F);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffd5 && (unsigned)a[i+1]==0xffffffe3)
	   {printf("%x",0XE6B599);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffcd && (unsigned)a[i+1]==0xffffffee)
	   {printf("%x",0XE79A96);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffc3 && (unsigned)a[i+1]==0xfffffff6)
	   {printf("%x",0XEE997BD);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffb8 && (unsigned)a[i+1]==0xffffffd3)
	   {printf("%x",0XE8B5A3);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffbe && (unsigned)a[i+1]==0xffffffa9)
	   {printf("%x",0XE4BAAC);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffc2 && (unsigned)a[i+1]==0xffffffb3)
	   {printf("%x",0XE9B281);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffba && (unsigned)a[i+1]==0xffffffda)
	   {printf("%x",0XE9BB91);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffcf && (unsigned)a[i+1]==0xffffffe6)
	   {printf("%x",0XE6b998);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffb6 && (unsigned)a[i+1]==0xfffffff5)
	   {printf("%x",0XE98482);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffd4 && (unsigned)a[i+1]==0xffffffc1)
	   {printf("%x",0XE7b2a4);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffc7 && (unsigned)a[i+1]==0xffffffed)
	   {printf("%x",0XE790bc);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffb9 && (unsigned)a[i+1]==0xfffffff3)
	   {printf("%x",0XE8b4b5);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffd4 && (unsigned)a[i+1]==0xffffffc6)
	   {printf("%x",0XE4ba91);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffc9 && (unsigned)a[i+1]==0xffffffc2)
	   {printf("%x",0XE99995);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffb8 && (unsigned)a[i+1]==0xffffffca)
	   {printf("%x",0Xe79498);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffc7 && (unsigned)a[i+1]==0xffffffe0)
	   {printf("%x",0XE99d92);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffcc && (unsigned)a[i+1]==0xffffffa8)
	   {printf("%x",0XE58fb0);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffb2 && (unsigned)a[i+1]==0xffffffd8)
	   {printf("%x",0XE8978f);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffc4 && (unsigned)a[i+1]==0xffffffda)
	   {printf("%x",0XE58685);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffb9 && (unsigned)a[i+1]==0xfffffff0)
	   {printf("%x",0XE6a182);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffc4 && (unsigned)a[i+1]==0xfffffffe)
	   {printf("%x",0XE5ae81);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffd0 && (unsigned)a[i+1]==0xffffffc2)
	   {printf("%x",0XE696b0);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffb9 && (unsigned)a[i+1]==0xffffffd2)
	   {printf("%x",0XE68c82);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffd1 && (unsigned)a[i+1]==0xffffffa7)
	   {printf("%x",0XE5ada6);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffbe && (unsigned)a[i+1]==0xffffffaf)
	   {printf("%x",0XE8ada6);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffb8 && (unsigned)a[i+1]==0xffffffdb)
	   {printf("%x",0XE6b8af);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffb0 && (unsigned)a[i+1]==0xffffffc4)
	   {printf("%x",0XE6beb3);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffca && (unsigned)a[i+1]==0xffffffb9)
	   {printf("%x",0XE4bdbf);
	     i+=2;}
	   else if((unsigned)a[i]==0xffffffc1 && (unsigned)a[i+1]==0xffffffec)
	   {printf("%x",0XE9a286);
	     i+=2;}
	  }
	else {printf("%c",a[i]);i++;}
 }
  return 0;
 } 
