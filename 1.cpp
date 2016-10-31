#include<iostream>
#include<string>
using namespace std;

class Employee{
	string name;
	int num;
	int hireDate;
	
public:
	Employee(){
	name = "empty";
	num = 0;
	hireDate = 0;
	}
	
	Employee(string n, int id, int hire){
		this->name = n;
		this->num = id;
		this->hireDate = hire;
	}
	
	string getName(){
		return name;
	}
	
	int getID(){
		return num;
	}
	
	int getDate(){
		return hireDate;
	}
};

class ProductionWorker : public Employee {
	int shift;
	double hourlyRate;
public:
	ProductionWorker()
	{
		shift = 0;
		hourlyRate = 0;
	}
	
	ProductionWorker(string, int, int, int, double);
	
	int getShift(){
		return shift;
	}
	
	double getRate(){
		return hourlyRate;
	}
};

ProductionWorker::ProductionWorker(string name, int ID, int date, int shiftHour, double pay) : Employee(name, ID, date){
	this->shift = shiftHour;
	this->hourlyRate = pay;
}

int main(){
	
	ProductionWorker emp1("John", 1234, 21, 2, 100);
	cout<<"name: " <<emp1.getName() <<endl
		<<"ID: " <<emp1.getID() <<endl
		<<"Hire date: " <<emp1.getDate() <<endl
		<<"Shift: " <<emp1.getShift() <<endl
		<<"Pay rate: " <<emp1.getRate();
	
	return 0;
}
