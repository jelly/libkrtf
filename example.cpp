#include <iostream>
#include <fstream>
#include <string>

#include "libkrtf.h"

int main()
{
	std::string rtf;
	std::ifstream file("samples/plain.rtf");
	if (!file.is_open()) {
		std::cout << "File not found" << std::endl;
	}


	std::getline(file, rtf, (char) file.eof());
	std::cout << rtf << std::endl;
	
	if (krtf::istext(rtf)) {
		std::cout << "it was text" << std::endl;
	}
	std::cout << krtf::istext(rtf) << std::endl;
	
	return 0;
}
