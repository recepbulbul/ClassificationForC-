#include <iostream>
#include <string>
using namespace std;

class Banka{
	public:
		int BankId;
		string Name,Location;

		Banka(int id = 1234, string n = "HalkBank", string l = "Elazig") : BankId(id), Name(n), Location(l) {}

		void bankabilg(){
			cout << BankId << endl << Name << endl << Location << endl;
		}
		


		 
};

class Account{
	public:
		int Id, CustomerId;
		Account(int i = 1234, int cid = 1234) : Id(i), CustomerId(cid) {}
};

class Checking : public Account{
	public:
		int oid, ocustid;
		void onay(){
			cout << "Id giriniz: ";
			cin >> oid;
			cout << "Costumer Id giriniz: ";
			cin >> ocustid;
			if (oid == Id && ocustid == CustomerId){
				cout << "Basarili Giris";
			} 
			else{
				cout << "Hatali Giris";
			}
		}
};

class Saving{

};


class Customer{
	private:
		int Id, PhoneNo, Acctno;
		string Name, Adress;
		Banka *bankam;
		Checking *check;
	public:
		Customer(Banka *ptr, Checking *chk) : bankam(ptr), check(chk){
			Id = 1234;
			PhoneNo = 364573524;
			Acctno = 234;
			Name = "Recep";
			Adress = "Elazig";

		} 
		
		void GeneralInquery(){
			cout << "Banka Bilgileriniz :";
			bankam->bankabilg();
		}
		void DepositMoney(){

		}
		void WithdrawMoney(){

		}
		void OpenAccount(){

		}
		void CloseAccount(){

		}
		void ApplyAccount(){
			check->onay();

		}
		void RequestCard(){

		}
};



int main(){
	Banka bankam;
	Checking check;
	Customer muster1(&bankam, &check);
	muster1.GeneralInquery();
	muster1.ApplyAccount();
	 	


	return 0;
}