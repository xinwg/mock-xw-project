#include <iterator>
#include <map>
#include "std_lib_facilities.h"

int main()
{
	// this is branch-a
	std::cout << "h." << std::endl;

	// test std::map

	std::map<std::string, int> TerminalID;
	TerminalID.insert(std::make_pair("Tokyo", 1));
	TerminalID.insert(std::make_pair("Dalian", 2));
	TerminalID["Barcelona"] = 3;
	TerminalID["Viena"]     = 4;
	TerminalID["Barcelona"] += 5;
	std::map<std::string, int>::iterator findKey;
	if ((findKey = TerminalID.find("Tokyo")) != TerminalID.end())
		std::cout << "..." << findKey->first << "::" << findKey->second << std::endl;
	else
		std::cout << "not found" << std::endl;

	// test pointer
	int* iPtr = NULL;
	int  b    = 90;
	iPtr      = &b;

	keep_window_open();
	return 0;
}
