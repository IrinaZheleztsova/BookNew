#pragma once
#include <string>

class Book {
public:
	void SetTitle(std::string &BookTitle);
	std::string GetTitle();
	void SetName(std::string &BookName);
	std::string GetName();
	void SetYear(int BookYear);
	int GetYear();
private:
	std::string title;
	std::string name;
	int year;
};



