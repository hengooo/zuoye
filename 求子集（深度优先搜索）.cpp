#include<stdio.h>
#include<string.h> 
void subset(int list[], int tag[], int n, int len) //�����Ӽ� ��2^n��listΪԭʼ���ݣ�tag���飬Ϊ�㷨֪ʶ��أ�
   {	if (n == len)                        //��������ʾ�ڼ���Ҳ���ǵڼ����Ӽ������ĸ�Ϊ�ܲ���Ҳ�����Ӽ����� 
	{   printf("-->");
		for (int i = 0; i < len; i++)
		{	if (tag[i] == 1)
				printf("%d ", list[i]);	}
    	printf("\n");
		return;}
	tag[n] = 1;//��ʼ����ȫΪ0,ÿ����һ�������Ͱ�tag��Ϊ1����ʾ�Ѿ����ʹ��ˡ� 
	subset(list, tag, n + 1, len);// ���ú���subset. 
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
		memset(number, 0, sizeof(int)*n);//��number�������ֽ����Ϊ0 
		memset(tag, 0, sizeof(int)*n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &number[i]);
		}

		subset(number, tag, 0, n);//���ú��� 

		delete[]number;//���Ϸ���new��϶�̬����ÿһ��Ԫ�ص���Ԫ�س��ȡ� 
		delete[]tag;   //�ȼ���int n;scanf("%d",&n);int number[n];int tag[n](��������ôд�� 
		number = NULL;//ԭ��ʹ��new��̬�����˿ռ����Ҫ��delete�ѿռ仹��ȥ����Ȼ��й¶�� 
		tag = NULL;
	}

	return 0;
}

