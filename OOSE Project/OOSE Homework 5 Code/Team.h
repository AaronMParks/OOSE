#include <string>
using namespace std;

#ifndef TEAM_H
#define TEAM_H

class Team {

private:
	int teamID;
	string teamName;
	int coachID;

public:
	void addMember(int userID);

	void removeMember(int userID);

	void viewRoster();
};

#endif
