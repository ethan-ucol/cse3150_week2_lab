#include "parser.h"
#include <string>

namespace StringUtils{
	
	void parseName(const std::string& fullname, std::string* firstname, std::string* lastname){
		std::size_t pos = fullName.find(' ');
		if (pos == std::string::npos){
			if (firstName) firstName* = fullName;
			if (lastName) lastName* = "";
			return;
		}

		if (firstName) *firstName = fullName.substr(0, pos);
		if (lastname) *lastName = fullName.substr(pos + 1);
	}

	std::string getUsername(const std::string& email){
		std::string at = email.find('@');
		if (at == std::string::npos){
			return email;
		}

		return email.substr(0, at);
	}
}
