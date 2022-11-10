#include "NewReleasePrice.h"
#include"Movie.h"

int NewReleasePrice::getPriceCode()

{
    return Movie::NEW_RELEASE;
}
double NewReleasePrice::getCharge(int daysRented)
{
	double result = 0;
	
	
		result += daysRented * 3;
		
	
	return result;
}

int NewReleasePrice::getBonus(int daysRented)
{
	int bonusPoint = Price::getBonus(daysRented);

	if ( daysRented > 1)
		bonusPoint++;
	return bonusPoint;
}
