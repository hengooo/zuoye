#include<stdio.h>
#include<string.h> 
void subset(int list[], int tag[], int n, int len) //生成子集 共2^n个list为原始数据，tag数组，为算法知识相关，
   {	if (n == len)                        //第三个表示第几层也就是第几个子集，第四个为总层数也就是子集个数 
	{   printf("-->");
		for (int i = 0; i < len; i++)
		{	if (tag[i] == 1)
				printf("%d ", list[i]);	}
    	printf("\n");
		return;}
	tag[n] = 1;//开始数组全为0,每访问一个数，就把tag设为1，表示已经访问过了。 
	subset(list, tag, n + 1, len);// 调用函数subset. 
	tag[n] = 0;
	subset(list, tag, n + 1, len);}
int main()
{   int m;
	scanf("%d", &m);
	while (m--)
	{
		int n;
		scanf("%d", &n);
		int *number = new int[n];
		int *tag = new int[n];
		memset(number, 0, sizeof(int)*n);//把number中所有字节填充为0 
		memset(tag, 0, sizeof(int)*n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &number[i]);
		}

		subset(number, tag, 0, n);//调用函数 

		delete[]number;//与上方的new结合动态输入每一组元素的总元素长度。 
		delete[]tag;   //等价于int n;scanf("%d",&n);int number[n];int tag[n](不允许这么写） 
		number = NULL;//原理：使用new动态申请了空间后，需要用delete把空间还回去，不然会泄露。 
		tag = NULL;
	}

	return 0;
}

