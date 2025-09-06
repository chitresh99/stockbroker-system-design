#pragma once

#include "order.hpp"
#include "exchConnector.hpp"
class OrderExecutioner {
public:
	void PlaceOrder(string userId, Order* order) {
		ExchConnector* exchConnector = ExchConnector::getExchConnectorInstance();
		exchConnector->sendOrderToExch(userId, order);
	}
};
