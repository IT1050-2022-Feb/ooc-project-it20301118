#include <iostream>
#include <string>
using namespace std;

class RegisteredCustomer
{
 private:
	char RcustomerName;
 	int  RcustomerID;
 	string Raddress;
	double RcontactNumber;
 
 public:
 	void addCustomerDetails(string Rcname, string RcID, string Raddress, double Rcnumber);
 	void login();
 	void logout();
};

