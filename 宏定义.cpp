#include<stdio.h>
#define X 5
#define Y X+1
#define Z Y*X/2
int main(){
	int a;
	a=Y;
	printf("%d %d",Z,a);//����ʱȫ���滻������˽�Լ����� 
	return 0;           //����z=x+1*x/2=7 
}
