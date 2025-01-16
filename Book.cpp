#include "Book.h"

string Book::getAuthor()
{
	return author;
}

void Book::setAuthor(string a)
{
	author = a;
}

float Book::getPrice()
{
	return price;

}

void Book::setPrice(float p)
{
	// validation 
	if (p < 0)
		cout << "Price can't be less than a zero!\n";
	else
		price = p;

}

int Book::getPages()
{
	return pages;
}

void Book::setPages(int p)
{
	if (p < 1)
		cout << "Number of pages can't be less than one!\n";
	else
		pages = p;
}

string Book::getAuthor()
{
	return author;
}

void Book::setAuthor(string a)
{
	author = a;
}
