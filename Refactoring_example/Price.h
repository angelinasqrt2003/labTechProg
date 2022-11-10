#pragma once
class Price
{
public:
	virtual int getPriceCode() = 0;
	//double getCharge();
	virtual double getCharge(int daysRented)=0;
};

