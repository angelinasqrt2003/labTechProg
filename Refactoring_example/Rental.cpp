#include "Rental.h"

double Rental::getCharge()
{
	return _movie.getChange(_daysRented);
}
int Rental::renterPoints()
{
	int bonousPoint = 1;

	if ((this->getMovie().getPriceCode() == Movie::NEW_RELEASE) &&
		this->getDaysRented() > 1)
		bonousPoint++;

	return bonousPoint;
}


	