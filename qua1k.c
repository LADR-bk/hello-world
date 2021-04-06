#include<stdio.h>
#include<math.h>
float third(float x,float y)
{
    float n;
    n=sqrt(x*x+y*y);
    return n;
}
int main()
{
    float a,b,c,peri,area;
    scanf_s("%f %f",&a,&b);
    c=third(a,b);
    peri=a+b+c;
    area=a*b/2;
    printf("perimeter=%f\n",peri);
    printf("area=%f\n",area);
    return 0;
}
