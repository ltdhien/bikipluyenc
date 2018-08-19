#include <stdio.h>
int main()
{
	double BMI, W, H;
	
	printf("W = ?");
	scanf("%lf",&W);
	printf("H = ?");
	scanf("%lf",&H);
	
	BMI = W/(H*H);
	
	printf("Chi so BMI la: %lf,\n",BMI);
	
	return 0;
}
