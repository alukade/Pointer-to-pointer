#include<stdio.h>
int main()
{
	int num = 520;
	int* p = &num;
	int** pp = &p;

	printf("num:%d\n", num);
	printf("*p:%d\n", *p);//一次解引用:*p存放的是num的值
	printf("**pp:%d\n", **pp);//两次解引用：**pp存放的也是num的值
	printf("&p:%p,pp:%p\n", &p, pp);//&p是p的地址，pp也是p的地址
	printf("&num:%p,p:%p,*pp:%p\n", &num, p, *pp);//p是num的地址，*pp也是num的地址

	return 0;
}
