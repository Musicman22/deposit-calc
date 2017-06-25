#include <stdio.h>
#include "deposit.h"

int main()
{
    int income, data, depRes;
    int forUserQuit;

    printf("\n");
    printf("Enter your income and data: ");
    scanf("%d""%d", &income, &data);

    if (valid_dat(income, data)) {
	printf("Your deposit is: %d\n", (depRes = deposit_calc(income, data)));
    } else {
	printf("Entered information is incorrect. Check your info:\n");
	printf("\t1. Minimal income value is 10000 \n");
	printf("\t2. Deposit data shouldn't be more than 365 days.\n");
	printf("Press any key to quit: ");
	scanf("%d", &forUserQuit);
    }
    return 0;
}
