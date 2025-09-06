#pragma once
#include "order.hpp"
#include "system.hpp"

class OrderValidator {
public:
	bool ValidateOrder(string pUserId, Order* order);
};