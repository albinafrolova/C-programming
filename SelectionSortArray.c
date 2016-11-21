#include <stdio.h>
 

 
#define SIZE 5
 
 
int* getData (int* pAry, int arySize);
void selectSort (int* pAry, int* pLast);
void printData (int* pAry, int* pLast);
int* smallest (int* pAry, int* pLast);
void exchange (int* current, int* smallest);
 
int main (void)
{
    int ary[SIZE];
    int* pLast;
 
    pLast = getData (ary, SIZE);
    selectSort (ary, pLast);
    printData (ary, pLast);
 
    return 0;
}
 
 
int* getData (int* pAry, int arySize)
{
    int ioResult;
    int readCnt = 0;
    int* pFill = pAry;
 
    do
    {
        printf("Enter Number Please: ");
        ioResult = scanf("%d", pFill);
        if (ioResult == 1)
        {
            pFill++;
            readCnt++;
        }
    } while (ioResult == 1 && readCnt < arySize);
 
    printf("\n\nOriginal: ");
    for(int i = 0; i < SIZE; i++)
        printf("%4d ", *pAry++);
 
 
 
    return (--pFill);
}
 
void selectSort (int* pAry, int* pLast)
{
    int* pWalker;
    int* pSmallest;
 
    for (pWalker = pAry; pWalker < pLast; pWalker++)
    {
        pSmallest = smallest (pWalker, pLast);
        exchange (pWalker, pSmallest);
    }
 
    return;
}
 
 
int* smallest (int* pAry, int* pLast)
{
    int* pLooker;
    int* pSmallest;
 
    for (pSmallest = pAry, pLooker = pAry + 1;
        pLooker <= pLast;
        pLooker++)
        if (*pLooker < *pSmallest)
            pSmallest = pLooker;
 
    return pSmallest;
}
 
 
void exchange (int* current, int* smallest)
{
    int temp;
 
    //printf("This is the current value %d and this is the smallest value %d", *current, *smallest);
 
    temp = *smallest;
    *smallest = *current;
    *current = temp;
 
    return;
}
 
 
void printData (int* pAry, int* pLast)
{
    int nmbrPrt;
    int* pPrint;
 
 
 
    printf("\n\nAscending: ");
    for (pPrint = pAry, nmbrPrt = 0;
        pPrint <= pLast;
        nmbrPrt++, pPrint++)
        printf("%4d", *pPrint);
 
    printf("\n\nDescending: ");
    for (pPrint = pLast, nmbrPrt = 0;
        pPrint >= pAry;
        nmbrPrt--, pPrint--)
        printf("%4d", *pPrint);
 
    
 
    return;
}