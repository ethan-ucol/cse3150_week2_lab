#include "parser.h"
#include <iostream>
#include <string>

using std::string, std::getline, std::cout, std::cin, std::endl;

int main(){
	string fullName;
	string email;

	cout << "Enter full name: ";
	getline(cin, fullName);

	cout << "Enter email: ";
	getline(cin, email);

	string* firstName = new string;
	string* lastName = new string;

	Stringutils::parseName(fullName, firstName, lastName);	
	string usernmae = StringUtils::parseEmail(email);

	cout << "First name: " << *firstName << endl;
	cout << "Last name: " << *lastName << endl;
	cout << "Email: " << *email << endl;

	delete firstName;
	delete lastName;

	return 0;

}
