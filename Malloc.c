/* This program reads integers from the given array and then sorts 
the array into ascending and descending order and prints the sorted list 
      Written by: Albina Frolova
      Date: 11/28/2016 */

#include <stdio.h>
#include <stdlib.h>
#define ROWS 5
#define COLS 3
#define SIZE 5

// Start of the program 

int main() {
      
  // Local declarations [main]
    int table[ROWS][COLS];
    int original[SIZE] = {26,14,57,33,41};
    int* ptr_array1;
    int* ptr_array2;
    int temp;
    
    // Initializing dynamic pointer arrays
    ptr_array1 = malloc(5*sizeof(int));
    ptr_array2 = malloc(5*sizeof(int));
    
    // Inserting data into pointer array
    for (int i = 0; i < SIZE; ++i) {
        ptr_array1[i] = original[i];
        ptr_array2[i] = original[i];
    }    

    // Sorting ptr_array1 into ascending order
    for (int i = 0; i < SIZE; ++i)
       for (int j = i+1; j < SIZE; ++j) 
        if (ptr_array1[i] > ptr_array1[j]) {
           temp = *(ptr_array1 + i);
           ptr_array1[i] = ptr_array1[j];
           ptr_array1[j] = temp;
        }
     
    // Sorting ptr_array1 into descending order
     for (int i = 0; i < SIZE; ++i)
      for (int j = i+1; j < SIZE; ++j) 
       if (ptr_array2[i] < ptr_array2[j]) {
           temp = *(ptr_array2 + i);
           ptr_array2[i] = ptr_array2[j];
           ptr_array2[j] = temp;
       }
       
    // Storing all data into 2D array table
    for (int i = 0; i < SIZE; ++i){
         table[i][0] = ptr_array1[i];
         table[i][1] = original[i];
         table[i][2] = ptr_array2[i];
    }

    // Printing 2D array
    printf("Ascending\tOriginal\tDescending\n");
    printf("------------------------------------------\n");
    for (int i = 0; i < ROWS; ++i){
         for (int j = 0; j < COLS; ++j){
                 printf("   %d\t\t", table[i][j]);
         }
         printf("\n");
    }
    
    return 0;
} // End of the program 
