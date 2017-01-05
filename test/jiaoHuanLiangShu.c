/*
输入两个整数a和b，交换二者的值，然后输出。
样例输入：
824 16
样例输出：
   */
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("%d %d\n",a,b);

	return 0;
}
