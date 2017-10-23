#include <string>

#include "libkrtf.h"

namespace krtf {

bool ishtml(const std::string& rtf)
{
	return rtf.find("\\fromhtml") != std::string::npos;
}
	
bool istext(const std::string& rtf)
{
	return rtf.find("\\fromtext") != std::string::npos;
}

} // namespace krtf
