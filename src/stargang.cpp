#include "common.hpp"
#include "user.hpp"
#include "orderMgr.hpp"

int main() {
	User* user = new User("chitresh");

	Stock* stock = new Stock("Coal India",1000,EXCH::NSE);

	Order* order = new Order(TXN_TYPE::BUY, ORDER_TYPE::LIMIT, 1100, 20, stock, EXCH::NSE);

	OrderMgr* orderMgr = new OrderMgr();
	orderMgr->Placeorder("chitresh", order);
	return 0;
}