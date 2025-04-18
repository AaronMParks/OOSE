#ifndef DOCUMENTS_H
#define DOCUMENTS_H

class Documents {

private:
	string DocID;
	date DocDate;
	int AccNum;

public:
	void getDoc(int DocID);

	void getAllDoc(int DocID, int AccNum, int DocDate);
};

#endif
