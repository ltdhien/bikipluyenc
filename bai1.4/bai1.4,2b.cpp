#include <stdio.h>
#include <math.h>

int main()
{
	const double pi = 3.1416;
	double x,z;
	
	printf("x = ?");
	scanf("%lf",&x);
	
	z = (sin(pi*x*x) + pow(pow(x,4)+1,1/4) + log(10))/(exp(2*x) + pow(10,cos((pi/4) + x)) + log2(0.1) );
	
	printf("Dap an la: \t2%lf",z);								
	
	return 0;
}
