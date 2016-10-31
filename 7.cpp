#include<iostream>
#include<string>

using namespace std;

class PersonData{
protected:
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	int zip;
	string phone;
	
public:
	PersonData(){
	lastName= " ";
	firstName= " ";
	address= " ";
	city= " ";
	state= " ";
	zip= 0;
	phone= " ";
	}
	
	PersonData(string lName, string fName, string address, string city, string state, int zip, string phone){
	this->lastName= lName;
	this->firstName= fName;
	this->address= address;
	this->city= city;
	this->state= state;
	this->zip= zip;
	this->phone= phone;
	}
	
	string getLName(){
		return lastName;
	}
	
	string getFName(){
		return firstName;
	}
	
	string getAddress(){
		return address;
	}
	
	string getCity(){
		return city;
	}
	
	string getState(){
		return state;
	}
	
	int getZip(){
		return zip;
	}
	
	string getPhone(){
		return phone;
	}
};

class CustomerData : public PersonData{
	int customerNumber;
	bool mailingList;
public:
	CustomerData(){
		customerNumber= 0;
		mailingList= 0;
	}
	
	CustomerData(int num, bool list, string lName, string fName, string address, string city, string state, int zip, string phone) 
	: PersonData(lName, fName, address, city, state, zip, phone){
		customerNumber= num;
		mailingList= list;
	}
	
	int getNum(){
		return customerNumber;
	}
	
	string getList(){
		string mail[]= {"no", "yes"};
		return mail[mailingList];
	}
};

int main(){
	
	CustomerData guy1(3, 1, "Simmons", "Ron", "Carly St.", "Central City", "MURICA!", 314159, "5554444");
	
	cout<<"Name: " <<guy1.getFName() <<" " <<guy1.getLName() <<endl
		<<"Address: " <<guy1.getAddress() <<endl
		<<"City: " <<guy1.getCity() <<endl
		<<"State: " <<guy1.getState() <<endl
		<<"Zip code: " <<guy1.getZip() <<endl
		<<"Phone number: " <<guy1.getPhone() <<endl
		<<"Customer number: " <<guy1.getNum() <<endl
		<<"Mailing list: " <<guy1.getList();
	
	return 0;
}
