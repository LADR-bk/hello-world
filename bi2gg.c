//求500内的菊花数
#include <stdio.h>
int main()
{
   int i,j,k,n;
	for(n=100;n<=500;n++)//n从100开始即确定n为三位数 
	{
		i=n/100;//分离百位
		j=n/10-i*10;//分离十位
		k=n%10;//分离个位
		if (n==i*i*i+j*j*j+k*k*k)//!!!在c语言中，“=”是赋值，而“=="才是判定 
		printf("%2d\n",n);
	}
}
