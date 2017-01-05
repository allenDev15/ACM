/*
已知鸡和兔的总数量为n，总腿数为m。 输入n和m，依次输出鸡的数目和兔的数目。 如
果无解，则输出No answer。
样例输入：
14 32
样例输出：
12 2
样例输入：
10 16
样例输出：
No answer
   */

#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a,b;
	a =(4*n-m)/2.0;
	b = n-a;
	//int a1 = (int)a;
	//int b1 = (int)b;
	if (m%2!=0||a<0||b<0){
		printf("No answer\n");
	}else {
		printf("%d %d\n",a,b);
	}
	

	return 0;
}
