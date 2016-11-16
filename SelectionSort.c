#include <stdio.h>
#define SIZE 25

//Function Declarations
int* getData (int* pAry, int arySize);
void selectionSort (int* pAry, int* last);
void printData (int* pAry, int* last);
int* smallest (int* pAry, int* pLast);
void exchange (int* current, int* smallest);

int main (void)
{
	//Local Declarations
	int ary[SIZE];
	int* pLast;

//Statements
	pLast = getData (ary,SIZE);
	selectionSort (ary,pLast);
	printData (ary, pLast);
	return 0; 
}

int* getData (int* pAry, int arySize)
{
	//Local Declarations
	int ioResult;
	int readCnt = 0;
	int* pFill = pAry;
//Statements
	do
		{
			printf("Please enter number or <EOF>: ");
			ioResult = scanf("%d",pFill);
			if (ioResult == 1)
			{
				pFill++;
				readCnt++;
			} //if
		} while (ioResult == 1 && readCnt <arySize);
		printf("\n\n%d numbers read.", readCnt);
		return (--pFill);
} //getData

void selectionSort (int* pAry, int* pLast)
{
	int* pWalker;
	int* pSmallest;

	for (pWalker = pAry; pWalker < pLast; pWalker++)
	{
		pSmallest = smallest (pWalker, pLast);
		exchange (pWalker, pSmallest);
	} // for
	return;
} //selectionSort

int* smallest(int* pAry, int* pLast)
{
	int* pLooker;
	int* pSmallest;

	for (pSmallest = pAry, pLooker = pAry + 1;
		 pLooker <= pLast; pLooker++)
		if (*pLooker < *pSmallest)
			pSmallest = pLooker;
		return pSmallest;
}

void exchange (int* p1, int* p2)
{
	int temp;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	return;
}

void printData (int* pAry, int* pLast)
{
	int nmbrPrt;
	int* pPrint;

	printf("\n\nYour data sorted are: \n");
	for (pPrint = pAry, nmbrPrt = 0; pPrint <= pLast; nmbrPrt++, pPrint++)
		printf("\n\nEnd of List ");
	return;
}




