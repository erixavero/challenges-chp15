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

class ShiftSupervisor : public Employee{
	double annSalary;
	double annBonus;
	
public:
	ShiftSupervisor(){
		annSalary= 0;
		annBonus= 0;
	}
	
	ShiftSupervisor(string name, int id, int date, double salary, double bonus) : Employee(name, id, date){
		this->annSalary = salary;
		this->annBonus = bonus;
	}
	
	double getSalary(){
		return annSalary;
	}
	
	double getBonus(){
		return annBonus;
	}
};

int main(){
	
	ShiftSupervisor emp1("Lila", 3452, 12, 9000, 10);
	cout<<"name: " <<emp1.getName() <<endl
		<<"ID: " <<emp1.getID() <<endl
		<<"Hire date: " <<emp1.getDate() <<endl
		<<"Annual salary: $ " <<emp1.getSalary() <<endl
		<<"Annual bonus: $ " <<emp1.getBonus();
		
	return 0;
}
