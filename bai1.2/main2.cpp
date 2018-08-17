#include <stdio.h>
int hien()
{
	char name[100];

	printf ("What's your name? \n");
	gets(name);
	
	printf("Hello ");
	printf("%s", name);

	

	return 0;
}

int main()
{
	hien();
	return 0;
}
