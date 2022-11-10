#pragma once
class Price
{
public:
	virtual int getPriceCode() = 0;
	//double getCharge();
	virtual double getCharge(int daysRented)=0;

	virtual int getBonus(int daysRented);

};

