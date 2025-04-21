#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;
class Book{
	string title;
	string author;
	string ISBN;
	public:
		Book(string t, string a, string I);
		string getTitle();
		string getAuthor();
		string getISBN();			
};
#endif