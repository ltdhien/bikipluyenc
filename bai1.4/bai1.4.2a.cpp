#include <stdio.h>
#include <math.h>

int main()
{
	double x,y;
	
	printf("x = ?");
	scanf("%lf",&x);
	
	y = pow( pow(x,1/3) + 10 * x * sqrt(fabs(x)) + 3/(pow(x,-5)) ,0.1);
	
	printf("Dap an la: %.2lf\n",y);
	
	return 0;
}
