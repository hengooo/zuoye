#include<stdio.h>
int main(){
	int num=1024;
	int *pi =&num;//ָ��char*����˼�Ǹ��Ҹ��ַ�����Ҫ�޸��������������޷��޸ĵ� 
	//(const char*���Ͳ������ڳ�ʼ��char*���͵�ʵ��Ľ������)
	const char*pt="Fish";//����1��������ǰ���һ��const��Ϊconst char*��˼�Ǹ��Ҹ��ַ�������Ҫ��ȡ���� 
	char *pp=(char *)"Fish";//����2��ǿ��ת��Ϊchar*���� 
	char pm[]="Fish";
	char *pm1=pm;//����3���Ա����Ƚ����ַ����������� 
	char *ps = "Fish";//�������ǲ���ֱ�ӽ��ַ������ַ���ֱ�Ӹ���ָ��� 
	void *pv;//�հ�ָ�룬�����κ�����ָ�������ָ��հ�����ָ�롣 
	
	pv =pi;
	printf("pi:%p,pv:%p\n",pi,pv);
	
	pv=ps;
	printf("ps:%p,pv:%p\n",ps,pv); 
	return 0;
}
//const char*��char��������� char*�����ǿ����޸ĵģ�const char*���С� 
