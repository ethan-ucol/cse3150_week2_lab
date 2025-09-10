#include "parser.h"
#include <iostream>
#include <string>

using std::string, std::getline, std::cout, std::cin, std::endl;

int main(){
	string fullName;
	string email;

	getline(cin, fullName);
	getline(cin, email);

	string* firstName = new string;
	string* lastName = new string;

	StringUtils::parseName(fullName, firstName, lastName);	
	string username = StringUtils::getUsername(email);

	cout << "First Name: " << *firstName << endl;
	cout << "Last Name: " << *lastName << endl;
	cout << "Username: " << username << endl;

	delete firstName;
	delete lastName;

	return 0;

}
