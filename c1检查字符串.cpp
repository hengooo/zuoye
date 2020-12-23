#include <stdio.h>
#include <string.h>
int main() {       
 int n;    
 scanf("%d\n", &n);    
 int i;    
 for (i = 0; i < n; i++) {        
 char a[100];        
 memset(a, 100, 0);        
 gets(a);        
 char b[10] = {"SCU"};        
 int j = 0, k = 0;        
 for (j = 0, k = 0; (j < strlen(a)) && (k < 4) ; j++) {            
   if (a[j] == b[k]) {                
   k++;                
   a[j] = 'A';            
   }        
   } 
   printf("%d",k);       
   if(k != 3) {            
   printf("NO\n");      
     }        
   if(k == 3) {            
   for (j = 0; j < strlen(a); j++) {                
    if(a[j] != 'A') {                    
	printf("NO\n");                    
	break;                
	}           
	 }            
   if(j == strlen(a)) {                
   printf("YES\n");            
   }        
   }        
   k = 0;    
   }        
   return 0;
   }

