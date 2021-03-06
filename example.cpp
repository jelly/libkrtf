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
	
	std::cout << "text: " << krtf::istext(rtf) << std::endl;
	std::cout << "html: " << krtf::ishtml(rtf) << std::endl;
	
	return 0;
}
