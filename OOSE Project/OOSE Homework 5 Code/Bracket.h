#include <string>
using namespace std;

#ifndef BRACKET_H
#define BRACKET_H

class Bracket {

private:
	int bracketID;
	List<int> gameIDs;

public:
	void generateMatchups();

	void updateBracket();
};

#endif
