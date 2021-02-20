#include<stdio.h>
int main(){
	int num=1024;
	int *pi =&num;//指针char*的意思是给我个字符串我要修改它但理论上是无法修改的 
	const char*="Fish";//所以可以在前面加一个const变为const char*意思是给我个字符串，我要读取它。 
	char *ps = "Fish";//理论上是不能直接将字符或者字符串直接赋给指针的 
	void *pv;//空白指针，其他任何类型指针均可以指向空白类型指针。 
	
	pv =pi;
	printf("pi:%p,pv:%p\n",pi,pv);
	
	pv=ps;
	printf("ps:%p,pv:%p\n",ps,pv); 
	return 0;
}
//const char*与char的区别就是 char*内容是可以修改的，const char*不行。 
