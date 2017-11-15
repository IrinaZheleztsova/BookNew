#include "Book.h"

void Book::SetTitle(std::string &BookTitle)
{
	title = BookTitle;
}
std::string Book::GetTitle()
{
	return(title);
}
void Book::SetName(std::string &BookName)
{
	name = BookName;
}
std::string Book::GetName()
{
	return(name);
}
void Book::SetYear(int BookYear)
{
	year = BookYear;
}
int Book::GetYear()
{
	return(year);
}


