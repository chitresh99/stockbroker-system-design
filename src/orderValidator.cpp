#pragma once
#include "orderValidator.hpp"


bool OrderValidator::ValidateOrder(string pUserId, Order* order) {
	User* user = System::getUser(pUserId);
	if (order->getTxnType() == TXN_TYPE::BUY) {
		cout << "Checking if user has FUNDS to buy" << endl;
	}
	else {
		cout << "Checking if the user has stocks to sell " << endl;
	}
	cout << "Assuming user has made valid order request " << endl;
	return true;
}
