#include <stdio.h>

double rad(double a)
{
	return a *3.141569 / 180;
}

int main()
{
	printf("Do:\t%d\t%d\t%d\t%d\n",30,45,60,90);
	printf("Radian:\t%.4lf\t%.4lf\t%.4lf\t%.4lf\n", rad(30),rad(45),rad(60),rad(90));
	return 0;
}
