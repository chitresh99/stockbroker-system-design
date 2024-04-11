#pragma once
#include "system.hpp"

unordered_map<string, User*>System::users;

void System::AddUser(string userId, User* user) {
	users[userId] = user;
}
User* System::getUser(string userId) {
	return users[userId];
}