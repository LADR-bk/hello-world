//由函数关系计算函数
#include<stdio.h>
int main()
{
	int x,y;
	printf("x=");
	scanf("%d",&x);
	if (x <1)//条件1
		y=x;
	else if (1<=x && x<10)//条件2
		y=2*x-1;
	else if (x>=10)//条件3
		y=3*x-11;
	
	printf("y=%d",y);//输出运算后的y
	return 0;
}
