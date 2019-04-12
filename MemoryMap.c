#include <stdio.h>
#include <iostream>
// by Albina Frolova
int main() {
	int x[2][3][2];
	int i,j,k;

	for (i=0; i < 3; i++)
	{
		for (j=0; j < 2; j++)
		{
			x[0][i][j] = i * 3 + j;
		}
	for (k=0; k<2; k++){
		for (j=0; j<2; j++){
			x[1][k][j] = x[0][j][k] - 1;
		}
	}	
}
printf("Label\t\tAddress\tValue\n");
for (i=0; i<2; i++)
{
	for (j= 0; j < 2; j++)
		{
			for (k-0; k < 2; k++)
			{
				printf("i: %d, j: %d,k:%d, %d\t%d\t\n", i,j,k, &x[i][j][k], x[i][j][k]);
			}
		}
    }
}