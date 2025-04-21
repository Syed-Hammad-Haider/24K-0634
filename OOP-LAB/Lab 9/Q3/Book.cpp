#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

Book::Book(string t, string a, string I):title(t),author(a),ISBN(I){}

string Book::getTitle(){
	return title;
}
string Book::getAuthor(){
	return author;
}
string Book::getISBN(){
	return ISBN;
}
