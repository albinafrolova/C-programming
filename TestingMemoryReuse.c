/*This program tests the reusability of dynamic memory.*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	//Local Declarations
	int looper;
	int* ptr;

	//Statements
	for(looper = 0; looper < 5; looper++)
	{
		ptr = malloc (16);
		printf("Memory allocated at: %p\n",ptr);
		free(ptr);
	} //for 
	return 0;
} //main