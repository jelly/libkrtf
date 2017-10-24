#ifndef LIBKRTF_H
#define LIBKRTF_H

#include <string>

namespace krtf {

	bool ishtml(const std::string&);
	bool istext(const std::string&);
	std::string bodyfromtext(const std::string&);

}

#endif
