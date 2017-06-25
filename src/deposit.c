#include <stdio.h>

int deposit_calc(int incAmount, int dat)
{
    int resOfDeposit;

    if (incAmount <= 100000) {
	if (dat <= 30) {
	    resOfDeposit = incAmount - incAmount / 10;
	    return resOfDeposit;
	} else if (dat <= 120) {
	    resOfDeposit = incAmount + incAmount * 2 / 100;
	    return resOfDeposit;
	} else if (dat <= 240) {
	    resOfDeposit = incAmount + incAmount * 6 / 100;
	    return resOfDeposit;
	} else {
	    resOfDeposit = incAmount + incAmount * 12 / 100;
	    return resOfDeposit;
	}
    } else {
        if (dat <= 30) {
	    resOfDeposit = incAmount - incAmount / 10;
	    return resOfDeposit;
	} else if (dat <= 120) {
	    resOfDeposit = incAmount + incAmount * 3 / 100;
	    return resOfDeposit;
	} else if (dat <= 240) {
	    resOfDeposit = incAmount + incAmount * 8 / 100;
	    return resOfDeposit;
	} else {
	    resOfDeposit = incAmount + incAmount * 15 / 100;
	    return resOfDeposit;
	}
    }
}

int valid_dat(int incAmount_forValid, int dat_forValid)
{
    if (incAmount_forValid < 10000 || (dat_forValid < 0 || dat_forValid > 365)) {
	return 0;
    } else {
	return 1;
    }
}

