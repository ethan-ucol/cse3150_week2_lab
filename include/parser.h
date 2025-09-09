#ifndef PARSER_H
#define PARSER_H
#include <string>

namespace StringUtils{
	void parseName(const std::string& fullname, std::string* firstname, std::string* lastname);
	std::string getUsername(const std::string& email);
}

#endif

