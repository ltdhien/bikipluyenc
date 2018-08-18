#include <stdio.h>
int main()
{
	double r, d, c, s;
	
	printf("r = ?");
	scanf("%lf",&r);
	printf("d = ?");
	scanf("%lf",&d);
	
	c = (d + r) * 2;
	s = d * r;
	
	printf("Chu vi la: %lf.\nDien tich la: %lf\n", c, s);

	return 0;
}
