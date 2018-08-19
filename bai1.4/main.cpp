#include <stdio.h>
int main()
{
	const double pi = 3.1416;
	printf("Do:\t%d\t%d\t%d\t%d\n",30,45,60,90);
	printf("Radian:\t%.4lf\t%.4lf\t%.4lf\t%.4lf\n",30*pi/180,45*pi/180,60*pi/180,90*pi/180);
	return 0;
}
