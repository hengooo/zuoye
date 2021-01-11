#include <stdio.h>
#include <stdlib.h>
int main(void){
	char str[10];
	int n,i;
	float sum=0,x=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",str);
		if(str[0]<='9'&&str[0]>='0'||str[0]=='-'){
			sum+=atoi(str);//这个函数是将字符转化成整数 
			x++;
		}
	}
	if(x==0) {
	printf("n/a");
	}
	else printf("%.2f",sum/x);
}

