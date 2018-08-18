#include <stdio.h>
int main()
{
	double r, c, s;
	
	printf("r = ? ");
	scanf("%lf", &r);
	
	c = 2 * 3.1416 * r;
	s = 3.1416 * r * r;
	
	printf("Chu vi la: %lf.\nDien tich la:%lf.\n",c,s);
	
	return 0;
}
