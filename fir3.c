//�ɺ�����ϵ���㺯��
#include<stdio.h>
int main()
{
	int x,y;
	printf("x=");
	scanf("%d",&x);
	if (x <1)//����1
		y=x;
	else if (1<=x && x<10)//����2
		y=2*x-1;
	else if (x>=10)//����3
		y=3*x-11;
	
	printf("y=%d",y);//���������y
	return 0;
}
