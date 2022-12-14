#pragma once
#include "Price.h"
class NewReleasePrice :
    public Price 
{
public:
    // Inherited via Price
    virtual int getPriceCode() override;
    double getCharge(int daysRented);
    int getBonus(int daysRented);
};

