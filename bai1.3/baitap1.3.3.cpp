#include <stdio.h>
int main()
{
	double C, F;
	printf("C = ?");
	scanf("%lf",&C);
	
	F  = (C*1.8)+32;
	
	printf("Do F la: %lf\n",F);
	
	printf("F = ?");
	scanf("%lf",&F);
	
	C = (F-32)/1.8;
	
	printf("Do C la: %lf\n",C);
	
	return 0;
}
