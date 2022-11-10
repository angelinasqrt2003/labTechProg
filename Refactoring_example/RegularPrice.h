#pragma once
#include "Price.h"

class RegularPrice :
    public Price
{
    // Inherited via Price
    virtual int getPriceCode() override;
};

