#include <stdio.h>

int main (void)
{
	int a;
	int b;

	//Statements
	printf("Please enter two integers: ");
	scanf("%d%d", &a, &b);

	if(a <= b)
		printf("%d <= %d\n",a,b);
	else
		printf("%d > %d\n",a,b);
	return 0;
}
