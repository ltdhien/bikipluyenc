#include <stdio.h>

int main()
{
	char s[10];
	int n = 0;
	printf("Bai tap tran so, hay nhap chuoi ky tu sao cho so xuat hien o duoi bang 1000\n");
	printf("Enter the string: ");
	fgets(s, 100, stdin);
	printf("Echo the string: %s", s);
	printf("So bi tran la: %d", n);
	return 0;
}