#ifndef PAYMENTS_H
#define PAYMENTS_H

class Payments {

private:
	int paymentID;
	int userID;
	float amount;
	string status;
	datetime timeStamp;

public:
	void processPayment();

	void refund();
};

#endif
