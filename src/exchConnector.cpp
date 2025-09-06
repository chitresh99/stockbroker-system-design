#include "exchConnector.hpp"

ExchConnector* ExchConnector::exchConnectorInstance = nullptr;
mutex ExchConnector::mtx;

ExchConnector* ExchConnector::getExchConnectorInstance() {
	if (exchConnectorInstance == nullptr) {
		mtx.lock();
		if (exchConnectorInstance == nullptr) {
			exchConnectorInstance = new ExchConnector();
		}
		mtx.unlock();
	}
		return exchConnectorInstance;
}
void ExchConnector::sendOrderToExch(string userId, Order* order) {
	cout << "Order is sent to EXCH.congratulations" << endl;
}


