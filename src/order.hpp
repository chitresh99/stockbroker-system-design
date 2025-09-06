#pragma once
#include "common.hpp"
#include "stock.hpp"

class Order {
	TXN_TYPE txnType; //transaction type
	ORDER_TYPE orderType; //order type
	double price;
	int qty;
	Stock* stock;

	EXCH exch;

public:
	Order(TXN_TYPE pTxnType, ORDER_TYPE pOrderType, double pPrice, int pQty, Stock* pStock, EXCH pExch) :
		txnType(pTxnType), orderType(pOrderType), price(pPrice), qty(pQty), stock(pStock), exch(pExch) {

	}
	TXN_TYPE getTxnType() {
		return txnType;
	}
};