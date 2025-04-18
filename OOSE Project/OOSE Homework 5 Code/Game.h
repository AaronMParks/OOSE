#ifndef GAME_H
#define GAME_H

class Game {

private:
	int gameID;
	datetime date;
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
