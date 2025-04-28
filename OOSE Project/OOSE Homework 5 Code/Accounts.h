#include <string>
using namespace std;

#ifndef ACCOUNTS_H
#define ACCOUNTS_H

class Accounts {

private:
	int AccNum;
	string DeliveryFreq;
	string CustName;

public:
	bool CheckCustAcc(int AccNum, int SSN);

	void getAllAcc(int AccNum, int DeliveryFreq, int CustName);
};

#endif
