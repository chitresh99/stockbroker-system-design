#pragma once
#include <iostream>
using namespace std;

//good practice to write enums
enum class TXN_TYPE {
	BUY,
    SELL,
};

enum class ORDER_TYPE {
	MARKET,
	LIMIT,
};

enum class EXCH {
	NSE,
	BSE,
};

enum class ORDER_STATUS{
	OPEN,
	PARTIALLY_DONE,
	DONE,
	CANCELLED,
};
