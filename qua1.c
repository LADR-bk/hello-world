//知三边求三角形周长面积
#include<stdio.h>
#include<math.h>
int main()
{
    float_t a,b,c,s,peri,area;
    scanf_s("%f %f %f",&a,&b,&c);
    peri=a+b+c;
    s=peri/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("a=%f\t b=%f\t c=%f\n",a,b,c);
    printf("perimeter=%f\n",peri);
    printf("area=%f\n",area);
    return 0;
}
