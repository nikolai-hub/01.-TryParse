#ifndef TRY_PARSE_H
#define TRY_PARSE_H

#include <string>
#include <sstream>

bool tryParse(const std::string& str,  int& a) {
	std::istringstream istr(str);
	int parsed = 0;
	bool isInt = bool(istr >> parsed);
	a = parsed;
	return isInt;

 }



#endif // !TRY_PARSE_H

