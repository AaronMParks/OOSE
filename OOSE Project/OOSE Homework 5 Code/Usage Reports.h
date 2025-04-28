#include <string>
using namespace std;

#ifndef USAGE_REPORTS_H
#define USAGE_REPORTS_H


class Usage_Reports {

private:
	int AccNum;

public:
	void getReport(int date, int AccNum, int SSN);
};

#endif
