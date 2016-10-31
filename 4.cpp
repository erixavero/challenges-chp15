#include<iostream>

using namespace std;

class Time{
	protected:
	int hour;
	int min;
	int sec;
	
public:
 	// Default constructor
	Time(){
	hour = 0;
	min = 0;
	sec = 0;
	}

	// Constructor
	Time(int h, int m, int s){
	hour = h;
	min = m;
	sec = s;
	}

	// Accessor functions
	int getHour() const
	{ return hour; }

	int getMin() const
	{ return min; }

	int getSec() const
	{ return sec; }
 };

class MilTime : Time{
	int milHours;
	int milSeconds;
	
public:
	MilTime(){
		this->milHours= 0;
		this->milSeconds= 0;
	}
	
	MilTime(int milHrs, int milSec) : Time(h, m, s)
	{
		if(milHrs<0 || milHrs>2359 || milSec<0 || milSec>59){
			cout<<"INVALID INPUT"; exit(0);
		}
		else{
		this->milHours = milHrs;
		this->milSeconds = milSec;
		}
	}
	
	setTime(int milHours, int milSeconds){
		if(milHours>=1200){
		h= milHours/100 -12;
		m= milHours - (milHours/100)*100;
		}
		else if(milHours<1200){
			h= milHours/100;
			m= milHours - (milHours/100)*100;
		}
		else if(milHour<100){
			
		}
		s= milSeconds;
	}
	
	int getHour(){
		return milHours;
	}
	
	int getStandHr(){
		return 
	}
};

int main(){
//	int hour, second;
//	cout<<"Insert military hour: ";
//	cin>>hour;
//	cout<<"Insert military second: ";
//	cin>>second;	
	
	MilTime newTime(1234, 3);
	cout<<getHour();
	
	return 0;
}
