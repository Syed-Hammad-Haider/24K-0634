#include <iostream>
#include <iomanip>
using namespace std;
class Time{
	int hrs;
	int mins;
	int secs;
	public:
		Time(){
			hrs=0;
			mins=0;
			secs=0;
		}
		Time(int hours,int minutes,int seconds){
			hrs=hours;
			mins=minutes;
			secs=seconds;
		}
		void diplayTime(){
			cout<<hrs<<":"<<mins<<":"<<secs<<endl;
		}
		void addTime(Time t1,Time t2){
			if ((t1.secs+t2.secs)>=60){
				mins+=1;
			    secs=(t1.secs+t2.secs)-60;}
		    else{
		        secs=(t1.secs+t2.secs);	
			}
			
			if ((t1.mins+t2.mins)>=60){
				hrs+=1;
				mins=(t1.mins+t2.mins)-60;
			}
			else{
				mins=(t1.mins+t2.mins);
			}
			
			hrs=(t1.hrs+t2.hrs);		    
	}
};
int main(){
	Time time1(10,45,34), time2(12,42,53), time3;
	cout<<"Time 1: ";
	time1.diplayTime();
	cout<<"Time 2: ";
	time2.diplayTime();
	time3.addTime(time1,time2);
	cout<<"Time 3: ";
	time3.diplayTime();
}
