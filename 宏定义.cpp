#include<stdio.h>
#define X 5
#define Y X+1
#define Z Y*X/2
int main(){
	int a;
	a=Y;
	printf("%d %d",Z,a);//运算时全部替换，不能私自加括号 
	return 0;           //所以z=x+1*x/2=7 
}
