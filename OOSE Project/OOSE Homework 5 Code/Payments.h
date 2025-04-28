#include <string>
using namespace std;

#ifndef PAYMENTS_H
#define PAYMENTS_H

class Payments {

private:
	int paymentID;
	int userID;
	float amount;
	string status;
	string date;
	string timeStamp;


public:
	void processPayment();

	void refund();
};

#endif
