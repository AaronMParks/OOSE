#ifndef LOCATION_H
#define LOCATION_H

class Location {

private:
	int locationID;
	string name;
	string address;
	bool isActive;

public:
	void markUnavailable();

	void updateInfo();
};

#endif
