#include<stdio.h>
int main()
{
	int num = 520;
	int* p = &num;
	int** pp = &p;

	printf("num:%d\n", num);
	printf("*p:%d\n", *p);//һ�ν�����:*p��ŵ���num��ֵ
	printf("**pp:%d\n", **pp);//���ν����ã�**pp��ŵ�Ҳ��num��ֵ
	printf("&p:%p,pp:%p\n", &p, pp);//&p��p�ĵ�ַ��ppҲ��p�ĵ�ַ
	printf("&num:%p,p:%p,*pp:%p\n", &num, p, *pp);//p��num�ĵ�ַ��*ppҲ��num�ĵ�ַ

	return 0;
}
