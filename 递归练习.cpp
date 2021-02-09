#include<stdio.h>
int sum(int N)
{  
	if(N==1)
	return 1;
    else
    return sum(N-1)+N;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",sum(n));
}
