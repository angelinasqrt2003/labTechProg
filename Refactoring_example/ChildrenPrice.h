#pragma once
#include "Price.h"
class ChildrenPrice :
    public Price
{
    // Inherited via Price
    virtual int getPriceCode() override;
};

