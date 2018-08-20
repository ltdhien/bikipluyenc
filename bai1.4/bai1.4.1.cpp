#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c,S,p;
	
	printf("a = ?");
	scanf("%lf",&a);
	printf("b = ?");
	scanf("%lf",&b);
	printf("c = ?");
	scanf("%lf",&c);
	
	p = (a + b +c)/2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	
	printf("Dien tich tam giac la:%lf.\n",S);
	
	return 0;	
}

