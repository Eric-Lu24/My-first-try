#include <stdio.h>

int main()
{
	double a;
	double b;
	const double S=2.0;
	printf("请输入两个数字，并用空格隔开：");
	scanf("%lf %lf",&a,&b);
	printf("%f + %f = %f\n",a,b,a+b);
	printf("%f",a*S);
	return 0;
}
