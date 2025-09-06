#pragma once
#include "user.hpp"
#include "unordered_map"

class System {
	//unordered map for every user 
	static unordered_map<string, User*> users;
public:
	static void AddUser(string userId, User* user);
	static User* getUser(string userId);
};