#include <string>
using namespace std;

#ifndef NOTIFICATION_H
#define NOTIFICATION_H

class Notification {

private:
	int notificationID;
	int userID;
	string message;

public:
	void sendMail();
	string getMessage();
};

#endif
