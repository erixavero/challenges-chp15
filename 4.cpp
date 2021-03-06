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

class MilTime : public Time{
	int milHours;
	int milSeconds;
	
public:
	MilTime(){
		this->milHours= 0;
		this->milSeconds= 0;
	}
	
	MilTime(int milHrs, int milSec): Time(hour, min, sec) 
	{
		if(milHrs<0 || milHrs>2359 || milSec<0 || milSec>59){
			cout<<"INVALID INPUT"; exit(0);
		}
		else{
		this->milHours = milHrs;
		this->milSeconds = milSec;
		}
	}
	
	void setTime()
	{

		if(milHours>=1200){
		hour= milHours/100 -12;
		min= milHours - (milHours/100)*100;
		}
		else if(milHours<1200){
			hour= milHours/100;
			min= milHours - (milHours/100)*100;
		}
		else if(milHours<100){
			milHours= min;
		}
		sec= milSeconds;
	}
	
	int getMilHour(){
		return milHours;
	}

};

int main(){
	int hour, second;
	cout<<"Insert military hour: ";
	cin>>hour;
	cout<<"Insert military second: ";
	cin>>second;	
	
	MilTime newTime(hour, second);
	//cout<<getHour();
	newTime.setTime();
	
	cout<<"Military time: "<<newTime.getMilHour()<<"."<<second <<endl;
	cout<<"Standard time: "<<endl<<newTime.getHour()<<": ";
	cout<<newTime.getMin()<<" : ";
	cout<<newTime.getSec()<<endl;
	return 0;
	
}
