#ifndef USERS_H
#define USERS_H

class Users {

private:
	int userID;
	string firstName;
	string lastName;
	string email;
	string password;
	string role;

public:
	void login();

	void updateProfile();

	void getDashboard();
};

#endif
