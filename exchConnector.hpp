#pragma once
#include "common.hpp"
#include "mutex"
#include "order.hpp"

class ExchConnector {
	ExchConnector() {}
	static ExchConnector* exchConnectorInstance;
	static mutex mtx;
public:
	static ExchConnector* getExchConnectorInstance();
	static void sendOrderToExch(string userId, Order* order);
	//static void sendOrderToExch(string userId, Order* order);
};