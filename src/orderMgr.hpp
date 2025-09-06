#pragma once

#include "orderValidator.hpp"
#include "OrderExecutioner.hpp"

class OrderMgr {
	OrderValidator* validator;
	OrderExecutioner* executioner;
public:
	OrderMgr() {
		validator = new OrderValidator;
		executioner = new OrderExecutioner;
	}
	void Placeorder(string userId, Order* order) {
		if (validator->ValidateOrder(userId, order)) {
			executioner->PlaceOrder(userId, order);
		}
	}
};