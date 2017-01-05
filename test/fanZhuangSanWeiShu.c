/*输入一个三位数，分离出它的百位、 十位和个位，反转后输出。
样例输入：
127
样例输出：
721
*/

#include<stdio.h>
int main() 
{
	int a;
	scanf("%d",&a);
	while(a<100||a>999){
		scanf("%d",&a);
	}

	int one = a/100;
	int tempTwo = a%100;
	int two = tempTwo/10;
	int three = tempTwo%10;
	printf("%d%d%d\n",three,two,one);

	return 0;
	
}
