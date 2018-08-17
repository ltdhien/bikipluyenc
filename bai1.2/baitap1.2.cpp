#include <stdio.h>
int main()
{
	int a;
	int b, c, tong, tich;
	
	printf("a = ? ");
	scanf("%d",&a);
	printf("b = ? ");
	scanf("%d",&b);
	printf("c = ?");
	scanf("%d",&c);
	
	tong = a + b + c;
	tich = a * b * c;
	
	printf ("Tong la: ");
	printf ("%d", tong);
	printf ("\nTich la: %d", tich);
	printf ("Tong la: %d\nTich la: %d", tong, tich);
	return 0;
}
