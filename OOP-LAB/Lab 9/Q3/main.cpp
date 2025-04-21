#include <iostream>
#include "Book.h"
using namespace std;

int main(){
Book book("Whispers of the Forgotten Realme","Elara Nightshade","978-1-4028-9462-7");
cout<<book.getTitle()<<endl;
cout<<book.getAuthor()<<endl;
cout<<book.getISBN()<<endl;	
return 0;
}