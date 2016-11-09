//
//  main.c
//  cww
//
//  Created by Альбина Фролова on 9/12/16.
//  Copyright © 2016 Альбина Фролова. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


//Function declarations
void getData(int* a, int* b, int* c, int* d, int* e);
int largest(int a, int b, int c, int d, int e);
int smallest(int a, int b, int c, int d, int e);
int sum(int a, int b, int c, int d, int e);
float average(int a, int b, int c, int d, int e);

//Start of program
int main(void) {
    int a, b, c, d, e;
    int option = 0;
    
    getData(&a, &b, &c, &d, &e);
    
    printf("\t***************************************");
    printf("\n\t*                  MENU               *");
    printf("\n\t*                                     *");
    printf("\n\t* 1. Largest Number                   *");
    printf("\n\t* 2. Smallest Number                  *");
    printf("\n\t* 3. Sum                              *");
    printf("\n\t* 4. Average                          *");
    printf("\n\t*                                     *");
    printf("\n\t************************************* *");
    
    printf("\n\nPlease type your choice ");
    printf("and key return: ");
    scanf ("%d", &option);

//Switch statement that determines users choice and calls functions
    switch(option)
    {
        case 1:
            printf("The Largest Number is: %d\n", largest(a,b,c,d,e));
            break;
        case 2:
            printf("The Smallest Number is: %d\n", smallest(a,b,c,d,e));
            break;
        case 3:
            printf("The Sum is: %d\n", sum(a,b,c,d,e));
            break;
        case 4:printf("The Average is: %f\n", average(a,b,c,d,e));
            break;
        default:
            printf("Error! Please try again!");
            break;
    }
    
    return 0;
}

void getData(int* a, int* b, int* c, int* d, int* e){
    printf("Please enter five integer numbers: ");
    scanf ("%d %d %d %d %d", a, b, c, d, e);
}

//Determines smallest number from input
int smallest(int a, int b, int c, int d, int e){
    int min=a;
    if(b<min)
        min=b;
    if(c<min)
        min=c;
    if(d<min)
        min=d;
    if(e<min)
        min=e;
    return min;
}

//Determines largest number from input
int largest(int a, int b, int c, int d, int e) {
    int max=a;
    
    if(b>max)
        max=b;
    if(c>max)
        max=c;
    if(d>max)
        max=d;
    if(e>max)
        max=e;
    return max;
}

//Adds all numbers and returns total
int sum(int a, int b, int c, int d, int e){
    int sum;
    sum = a + b + c + d + e ;
    return sum;
}

//Returns average of input
float average(int a, int b, int c, int d, int e){
    float average = sum(a, b, c, d, e) / 5;
    return average;
}
