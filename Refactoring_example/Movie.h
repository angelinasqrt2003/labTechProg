#pragma once
#include <string>
#include "Price.h"
#include "ChildrenPrice.h"
#include "NewReleasePrice.h"
#include "RegularPrice.h"
#include <stdexcept>


using namespace std;


class Movie
{
public:
	static const int CHILDREN = 2;
	static const int REGULAR = 0;
	static const int NEW_RELEASE = 1;
private:
	string _title;
	//int _priceCode;
	Price *_price;

public:
	Movie() {
		_title = "";
		setPriceCode(0);
	}

	Movie(string title, int priceCode){
		_title = title;
		setPriceCode(priceCode);
	}

	int getPriceCode() {
		return _price->getPriceCode();
	}

	void setPriceCode(int arg) {
		//_priceCode = arg;
		switch (arg)
		{
		case  REGULAR:
			_price = new RegularPrice();

			break;

		case CHILDREN :

			_price = new ChildrenPrice();

			break;

		case NEW_RELEASE :
			
			_price = new NewReleasePrice();
			
			break;
		default:
			throw invalid_argument("Incorrect price code");

		}
	}

	string getTitle() {
		return _title;
	}
	
	int getBonus()
	{
		int bonousPoint = 1;

		if ((getPriceCode() == Movie::NEW_RELEASE) &&
			daysRented > 1)
			bonousPoint++;

		return _price->getBonus();
	}


};

