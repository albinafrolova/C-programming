/* Print an array forward by adding 1 to a pointer. 
   Then print it backward by subtracting one. */
#include <stdio.h>
#define MAX_SIZE 10

int main (void)
{
//Local Declarations
	int ary[] = {1,2,3,4,5,6,7,8,9,10};
	int* pWalk;
	int* pEnd;
//Statements
	//Print array forward 
	printf("Array forward : ");
	for (pWalk = ary, pEnd = ary + MAX_SIZE;
		 pWalk < pEnd;
		 pWalk++)
		printf ("%3d", *pWalk);
	printf("\n");

	//Print array backward 
	printf("Array backward : ");
	for (pWalk = pEnd - 1; pWalk >= ary; pWalk--)
		printf("%3d", *pWalk);
	printf("\n");

	return 0;
} //main