#pragma once
#include "common.hpp"

class Stock {
	EXCH exch;
	string name;
	double price;

public:
	Stock(string pName, double pPrice, EXCH pExch) : //constructor
		name(pName), price(pPrice), exch(pExch) { //intializing the constructor

	}

};