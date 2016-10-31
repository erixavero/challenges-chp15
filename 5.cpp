#include<iostream>

using namespace std;

class MilTime{
protected:
	int milHours;
	int milSeconds;
	
public:
	MilTime(){
		this->milHours= 0;
		this->milSeconds= 0;
	}
	
	MilTime(int milHrs, int milSec) 
	{
		if(milHrs<0 || milHrs>2359 || milSec<0 || milSec>59){
			cout<<"INVALID INPUT"; exit(0);
		}
		else{
		this->milHours = milHrs;
		this->milSeconds = milSec;
		}
	}
	
	int getMilHour(){
		return milHours;
	}

};

class TimeClock : public MilTime{
	int endTime;
	
public:
	TimeClock(){
	endTime= 0;
	}
	
	TimeClock(int time, int milHours) : MilTime(milHours, milSeconds){
		this->endTime = time;
	}
	
	int getTimeElapse(){
		if(endTime<milHours){
			return (endTime-milHours)/-100;
		}
		else{
		return (endTime-milHours)/100;
		}
	}
};

int main(){
	int milStart, milEnd;
	cout<<"Enter military time(100 milHour = 1 hour)"<<endl
		<<"Start time: "; cin>>milStart;
	cout<<"End time: "; cin>>milEnd;	
	
	TimeClock newTime(milEnd, milStart);
	cout<<"Time elapsed: " <<newTime.getTimeElapse() <<" hours";
	
	return 0;
}
