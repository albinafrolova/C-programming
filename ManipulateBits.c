#include<stdio.h>

// by Albina Frolova
int main()
{
//all bits set to value of 0 
int number = 0,i;
int bit_position = 0;
int choice;
while(1)
{
//loop where it prints out the current bit values as a single integer
for(i=31; i>=0; i--) {
printf("%i",((number & (1 << i))?1:0));
}
//choose either to set a bit, clear a bit, or exit.
printf("\nEnter 1. to set bit :");
printf("\nEnter 2. to clear bit :");
printf("\nEnter 3. to exit :");
printf("\nEnter your choice :");
scanf("%d",&choice);
if(choice == 3) break;
// If the user desires to set a bit or clear a bit,
// then the program should prompt the user for which bit, change the appropriate value, and then cycle back to the beginning of the loop
if(choice ==1 || choice == 2)
{
printf("\nEnter bit position to set or clear bit :");
scanf("%d", &bit_position);
}
if(choice == 1)
number |= 1 << bit_position;
if(choice == 2)
number &= ~(1 << bit_position);
}
return 0;
}