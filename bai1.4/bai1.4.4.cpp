#include <stdio.h>
double BMI(double weight, double height)
{
	return weight / (height*height);
}
int main()
{
	double w,h;
	printf("Can nang (kg): ");
	scanf("%lf",&w);
	printf("Chieu cao (m): ");
	scanf("%lf",&h);
	
	printf("Chi so BMI = %.2lf",BMI(w,h));
	
	return 0;
}
