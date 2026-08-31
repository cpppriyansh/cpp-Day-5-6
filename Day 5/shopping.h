//Create a class Customer with data members such as customerId, customerName, and
//contactNumber.
//• Provide suitable constructors and member functions to initialize and display customer
//details.
//• Create a class Product with data members such as productId, productName, price, and
//quantity.
//• Provide suitable constructors and member functions to initialize and display product details.
//• Create a class Order that contains objects of both Customer and Product classes.
//• The Order class should also store an orderId.
//• Use constructors to initialize the contained Customer and Product objects.
//• Calculate and display the total order amount based on product price and quantity.
//• Create at least three Order objects and display complete order details.

#pragma once
#include<iostream>
using namespace std;

class customer {
private:
	int customerId, customerNumber;
	string  customerName;
public:
	customer() {
		customerId = 0;
		customerName = "NA";
		customerNumber = 0;
	}

	customer(int customerId, string customerName, int customerNumber) {
		this->customerId = customerId;
		this->customerName = customerName;
		this->customerNumber = customerNumber;
	}

};