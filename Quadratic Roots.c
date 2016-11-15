#include <stdio.h>
#include <math.h>

// Function Declaration 
void getData (int* pa, int* pb, int* pc);
int quadratic (int a, int b , int c, double* pRoot1, double* pRoot2);

void printResults (int numRoots, int a, int b, int c, double root1, double root2);

int main (void)
{
// Local Declaration
	int a;
	int b; 
	int c;
	int numRoots;
	double root1;
	double root2;
	char again = 'Y';

// Statements
	printf("Solve quadratic equations.\n\n");
	while (again == 'Y' || again == 'y')
	{
		getData (&a, &b, &c);
		numRoots = quadratic (a,b,c, &root1, &root2);
		printResults(numRoots,a,b,c,root1,root2);

		printf("\nDp you have another equation (Y/N): ");
		scanf(" %c ", &again);
	} // while
	printf("\nThank you.\n");
	return 0;
} // main 

void getData (int* pa, int* pb, int* pc)
{
// Statements 
	printf("Please enter coefficients a, b, & c: ");
	scanf("%d%d%d", pa, pb, pc);

	return; 
} // getData

int quadratic (int a, int b, int c, double* pRoot1, double* pRoot2)
{
	int result;
	double discriminant;
	double root;

// Statements 
	if (a == 0 && b == 0)
		result = -1;
	else 
		if (a == 0)
		{
			*pRoot1 = -c / (double) b;
			result  = 1;
		} // a == 0
	else 
	{
		discriminant = b * b - (4 * a * c);
		if (discriminant >= 0)
		{
			root = sqrt(discriminant);
			*pRoot1 = (-b + root) / (2 * a);
			*pRoot2 = (-b - root) / (2 * a);
			result = 2;
		} // if >= 0
	else 
		result = 0;
	} // else 
return result; 
} // quadratic 

void printResults (int numRoots, int a, int b, int c, double root1, double root2)
{
 // Statements 
	printf("Your equation: %dx**2 + %dx + %d\n", a,b,c);
	switch (numRoots)
	{
		case 2: printf("Roots are: %6.3f & %6.3f\n", root1, root2);
				break;
		case 1: printf("Only one root: %6.3f\n", root1);
				break;
		case 0: printf("Roots are imaginary.\n");
				break;
		default: printf("Invalid coefficients\n");
				break;
	} // switch 
return;
} // printResults 