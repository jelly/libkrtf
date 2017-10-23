#include <string>

#include "libkrtf.h"

namespace krtf {

bool isthtml(const std::string& rtf)
{
	return rtf.find("\\fromhtml") != 0;
	
}
	
bool istext(const std::string& rtf)
{
	return rtf.find("\\fromtext") != 0;
}

} // namespace krtf
