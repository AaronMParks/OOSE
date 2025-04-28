#include <string>
using namespace std;

#ifndef GAME_H
#define GAME_H

class Game {

private:
	int gameID;
	string date;
	string timeStamp;
	int locationID;
	int teamAID;
	int teamBID;
	int scoreA;
	int ScoreB;

public:
	void recordScore();

	void updateTime();
};

#endif
