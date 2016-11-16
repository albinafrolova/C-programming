/* Read from the keyboard & print integers multiplied by 2*/
#include <stdio.h>
#define SIZE 5

//Function Declarations 
void multiply (int* pAry, int size);

int main(void)
{
//Local Declarations 
	int ary [SIZE];
	int* pLast;
	int* pWalk;

//Statements
	pLast = ary + SIZE - 1;
	for (pWalk = ary; pWalk <= pLast; pWalk++)
	{
		printf("Please enter an integer: ");
		scanf ("%d", pWalk); 
	} // for
	multiply (ary, SIZE);

	printf ("Doubled value is: \n");
	for (pWalk = ary; pWalk <= pLast; pWalk++)
		printf (" %3d", *pWalk);
	return 0;
}//main

void multiply (int* pAry, int size)
{
//Local Declarations 
	int* pWalk;
	int* pLast;
//Statements
	pLast = pAry + size - 1;
	for (pWalk = pAry; pWalk <= pLast; pWalk++)
		*pWalk = *pWalk * 2;
	return;
}//multiply
