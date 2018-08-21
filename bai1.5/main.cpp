#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,delta;
	
	printf("Nhap cac he so: ");
	scanf("%lf %lf %lf",&a ,&b ,&c );
	
	delta = b*b - 4*a*c;
	if(delta < 0)
		printf("Da thuc vo nghiem.\n");
	if(delta == 0)
		printf("Da thuc co 1 nghiem: %lf.\n", -b/(2*a));
	if(delta > 0)
	{
		double x1 = (-b - sqrt(delta))/(2*a);
		double x2 = (-b + sqrt(delta))/(2*a);
		printf("Da thuc co 2 nghiem: %lf, %lf.\n",
		x1,x2);
	}
	
	return 0;
}
