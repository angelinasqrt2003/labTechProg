#pragma once
class Price
{
public:
	virtual int getPriceCode() = 0;
	//double getCharge();
	double getCharge(int daysRented);
};

