#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int amount;
	FILE* spData;

	if(!(spData = fopen("P11-03.TXT","r")))
	{
		printf("\aCould not open input file.\n");
		exit(100);
	}//if
	while (fscanf(spData,"%*d%d*[^\n]",&amount) != EOF)
		printf("Second integer: %4d\n", amount);
	printf("End of program\n");
	fclose (spData);
	return 0;
}