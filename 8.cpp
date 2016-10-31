#include<iostream>

using namespace std;

class CustomerData {
	int customerNumber;
	bool mailingList;
public:
	CustomerData(){
		customerNumber= 0;
		mailingList= 0;
	}
	
	CustomerData(int num, bool list) 
	{
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

class PreferredCustomer : public CustomerData{
	double purchaseAmount;
	double discountLvl;
	
public:
	PreferredCustomer(){
		purchaseAmount= 0;
		discountLvl= 0;
	}
	
	PreferredCustomer(double buy, int num, bool mail) : CustomerData(num, mail){
		if(buy<0){
			cout<<"INVALID INPUT"; exit(0);
		}
		else{
		purchaseAmount= buy;
		}
	}
	
	double getPurchase(){
		return purchaseAmount;
	}
	
	double getDiscount(){
		if(purchaseAmount>=2000){
			return 10;
		}
		else if(purchaseAmount>=1500){
			return 7;
		}else if(purchaseAmount>=1000){
			return 6;
		}
		else if(purchaseAmount>=500){
			return 5;
		}	
	}
};

int main(){
	
	PreferredCustomer guy1(1234, 4, 0);
	
	cout<<"Customer number: " <<guy1.getNum()<<endl
		<<"Mailing list: " <<guy1.getList()<<endl
		<<"Total purchase: $ " <<guy1.getPurchase() <<endl
		<<"Discount: " <<guy1.getDiscount() <<" %";
	
	return 0;
}
