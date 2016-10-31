#include<iostream>

using namespace std;

class ProductionWorker{
	int shift;
	double hourlyRate;
	
public:
	ProductionWorker(){
	shift = 0;
	hourlyRate = 0;
	}
	
	ProductionWorker(int shiftHour, double pay){
	this->shift = shiftHour;
	this->hourlyRate = pay;
}
	
	string getShift(){
		string shiftStr[] = {"day", "night"};
		return shiftStr[shift-1];
	}
	
	double getRate(){
		return hourlyRate;
	}
	
};



class TeamLeader : public ProductionWorker{
	int monthlyBonus;
	int trainingHours;
	int trainingSessions;
	
public:
	TeamLeader(){
	monthlyBonus= 0;
	trainingHours= 0;
	trainingSessions= 0;
	}
	
	TeamLeader(int shift, double pay, int bonus, int hours, int sessions) : ProductionWorker(shift, pay){
	this->monthlyBonus = bonus;
	this->trainingHours = hours;
	this->trainingSessions = sessions;
	}
	
	getBonus(){
		return monthlyBonus;
	}
	
	getTrainHrs(){
		return trainingHours*trainingSessions;
	}
	
	getTrainSes(){
		return trainingSessions;
	}
};

int main(){
	
	TeamLeader emp1(2, 1000, 10, 5, 3);
	cout<<"Shift: " <<emp1.getShift() <<endl
		<<"Hourly rate: $ " <<emp1.getRate() <<endl
		<<"Monthly bonus: $ " <<emp1.getBonus() <<endl
		<<"Training sessions done: " <<emp1.getTrainSes() <<endl
		<<"Training hours done: " <<emp1.getTrainHrs() ;
	
	return 0;
}
