//Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent toll. Mostly they do, but
//sometimes a car goes by without paying. The tollbooth keeps track of the number of cars that have gone by, and of
//the total amount of money collected.
//Model this tollbooth with a class called tollBooth. The two data items are a type unsigned int to hold the total
//number of cars, and a type double to hold the total amount of money collected. A constructor initializes both of
//
//these to 0. A member function called payingCar() increments the car total and adds 0.50 to the cash total. Another
//function,
//called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a member function called
//display() displays the two totals. Make appropriate member functions const.
//Include a program to test this class. This program should allow the user to push one key to count a paying car, and
//another to count a nonpaying car. Pushing the Esc key should cause the program to print out the total cars and
//total cash and then exit.
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
class TollBooth{
	int cars;
	double amount;
	public:
		TollBooth(){
			amount=0.0;
			cars=0;
		}
		void payingCar(){
			cars++;
			amount+=0.50;
		}
		void nopayCar(){
			cars++;
		}
		void display(){
			cout<<"Number of cars: "<<cars<<endl;
			cout<<"Total amount collected: $"<<amount<<endl;
		}
};
int main(){
	TollBooth obj;
	char ch;
	do{
		cout<<"Enter n/N for non-paying car: "<<endl;
		cout<<"Enter p/P for paying car: "<<endl;
		ch=_getch();
		if (ch=='n' || ch=='N' )
			obj.nopayCar();
		else if(ch=='p'||ch=='P')
		    obj.payingCar();
		else
		    cout<<"Enter valid key";
		cout<<"Enter Esc to display details and exit: "<<endl;
		ch=_getch();
			}
		    while(ch!=27);
		obj.display();    
}

