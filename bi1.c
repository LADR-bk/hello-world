#include<stdio.h>
int main()
{
	int n,t,num=10;//nΪ������tΪ�м�ֵ��numΪ������
	float a=2, b=1, s=0;
	for (n=1;n<=num;n++)
		{
		    s=s+a/b;
            t=a;
            a=a+b;
            b=t;
		}
	printf("sum= %10.6f/n",s);
}
