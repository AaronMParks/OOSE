

#include <string>
using namespace std;

#ifndef DOCUMENTS_H
#define DOCUMENTS_H

class Documents {

private:
	string DocID;
	string DocDate;
	int AccNum;

public:
	string getDoc(int DocID);


	void getAllDoc(int DocID, int AccNum, int DocDate);
};

#endif
