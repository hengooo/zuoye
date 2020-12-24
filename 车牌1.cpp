#include<stdio.h>
#include<string.h> 
int main()
{int i=0; 
const char *hanzi[100]={"'E5B79D'","'E7B2A4'","'E4BAAC'","'E6B4A5'","'E6B2AA'","'E6B89D'","'E58680'","'E8B1AB'","'E4BA91'","'E8BEBD'","'E9BB91'","'E6B998'","'E79A96'",
"'E9B281'","'E696B0'","'E88B8F'","'E6B599'","'E8B5A3'","'E98482'","'E6A182'","'E79498'","'E6998B'","'E89299'","'E99995'","'E59089'","'E997BD'","'E8B4B5'","'E99D92'",
"'E8978F'","'E5AE81'","'E790BC'","'E68C82'","'E5ADA6'","'E8ADA6'","'E6B8AF'","'E6BEB3'","'E4BDBF'","'E9A286'"};
 char a[16];
 scanf("%s",&a);
 while((unsigned char)a[i] !=NULL)
 {
	if((unsigned char)a[i]>0x7E)
 	{
	 printf("%x%x",(unsigned char)a[i],(unsigned char)a[i+1]);
 	 i+=2;
	 }
	else
	{
		printf("%c",(unsigned char)a[i]);
		i++;
	 }
	 }
switch((unsigned char)a[0]){
  	case 1: printf("%s",hanzi[0]);break; 
  	
  	
  	
  	
  }

 } 
