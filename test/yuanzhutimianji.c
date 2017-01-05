#include<stdio.h>
#include<math.h>
int main(){

	const float  pi = acos(-1.0);
       	printf("pi=%f\n",pi);

	float r,h;
	printf("请输入半径:");
	scanf("%f",&r);
	printf("请输入高度:");
	scanf("%f",&h);
	float s1 = 2*pi*r*r;
	float s2 = 2*pi*r*h;

	printf("area=%.3f\n",s1+s2);
}
