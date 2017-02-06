#include <stdio.h>

int binarySearch (int list[], int* endPtr,
				  int target, int** locnPtr)

int main(void)

{
	int* firstPtr;
	int* midPtr;
	int* lastPtr;

	firstPtr = list;
	lastPtr =  endPtr;
	while (firstPtr <= lastPtr)
	    {
	    	midPtr = firstPtr + (lastPtr - firstPtr) / 2;
	    	if (target > *midPtr)
	    		//look in upper half 
	    		firstPtr = midPtr + 1;
	    	else if (target < *midPtr)
	    		//look in lower half
	    		lastPtr = midPtr - 1;
	    	else 
	    		//found equal: force exit
	    		firstPtr = lastPtr + 1;
		} //end while
	*locnPtr = midPtr;
	return(target == *midPtr);
} //binarySearch
