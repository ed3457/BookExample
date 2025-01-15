#pragma once
#include <string>
using namespace std; 
class Book
{
private:
	int pages;
	string title;
	string author;
	float price;

public:
	// set and get

	void setPages(int n);
	int getPages();
	void setTitle(string t);
	string getTitle();
	void setAuthor(string a);
	string getAuthor();
	void setPrice(float p);
	float getPrice();

	void displayBookInfo();



};

