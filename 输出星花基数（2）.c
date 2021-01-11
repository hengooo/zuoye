#include<stdio.h>
int main()
{
	int n,i,a;
	scanf("%d",&n);
	if(n%2==0)
	printf("illegal");
	else{
	for(i=1;i<=n;i+=2)
	{
		for(a=1;a<=i;a++)
		printf("*");
		printf("\n");
	}
	
	}
	return 0;
}
