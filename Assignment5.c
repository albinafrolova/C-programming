/*
 * C program to sort N numbers in ascending order using Bubble sort
 * and print both the given and the sorted array
 */
#include <stdio.h>
#define MAXSIZE 10
 
int main()
{
    int ascending[MAXSIZE], original[MAXSIZE], descending[MAXSIZE];
    int i, j, num, temp;
 
    printf("Enter the value of num \n");
    scanf("%d", &num);

    printf("Enter the elements one by one \n");
    for (i = 0; i < num; i++){
        scanf("%d", &ascending[i]);
    }

    for (i = 0; i < num; i++){
        original[i] = ascending[i];
    }

    /*   Bubble sorting begins */
    for (i = 0; i < num; i++){
        for (j = 0; j < (num - i - 1); j++){
            if (ascending[j] > ascending[j + 1]){
                temp = ascending[j];
                ascending[j] = ascending[j + 1];
                ascending[j + 1] = temp;
            }
        }
    }

    int x = 0;
    for (i = num-1; i >= 0; i--){
        descending[x] = ascending[i];
        x++;
    }

    printf("Ascending\tOriginal\tDescending\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\t\t%d\t\t%d\n", ascending[i], original[i], descending[i]);
    }
}