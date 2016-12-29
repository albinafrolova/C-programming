#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void)
{
	unsigned int comAddr[4];
	unsigned int mask[4];
	unsigned int netAddr[4];
	uint32_t   comAd = 0;
	uint32_t   mask32 = 0;
	uint32_t   netAd = 0;
	int        prefix;

	printf("Enter host address <x.y.z.t>: ");
	scanf("%d%*c%d%*c%d%*c%d", &comAddr[3], &comAddr[2], &comAddr[1],&comAddr[0]);

	printf("Enter prefix: ");
	scanf("%d", &prefix);

	for (int i = 3; i >= 0; i--)
		comAd = comAd * 256 + comAddr[i];
	for (int i = 32 - prefix; i < 32; i++)
		mask32 = mask32 | (1 << i);
	netAd = comAd & mask32;

	for (int i = 0; i < 4; i++)
	{
		mask[i] = mask32 % 256;
		mask32 = mask32 / 256;
	}

	for (int i = 0; i < 4; i++)
	{
		netAddr[i] = netAd % 256;
		netAd      = netAd / 256;
	}

	printf("\nAddresses:\n");
	printf("Computer Address: \n");
	printf("%d.%d.%d.%d\n", comAddr[3], comAddr[2], comAddr[1], comAddr[0]);

	printf("Mask          ");
	printf("%d.%d.%d.%d\n", mask[3], mask[2], mask[1], mask[0]);

	printf("Net Address   ");
	printf("%d.%d.%d.%d\n", netAddr[3], netAddr[2], netAddr[1], netAddr[0]);

	return 0;
}