#include <stdio.h>

int main()
{
	double x,y;
	
	printf("x = ?");
	scanf("%lf",&x);
	
	y = (((x*x-4)*x+1)*x-2)*x-1;
	
	printf("Dap an la: %.2lf",y);
	
	return 0;
}
