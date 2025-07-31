#ifndef __HEX_STRING_HPP__
#define __HEX_STRING_HPP__

#include <cstdint>
#include <iomanip>
#include <sstream>
#include <string>

// using namespace std;
std::string hexString(uint64_t value, uint64_t digits, bool ellipsis = false);

// string hexString(uint64_t value, uint64_t digits, bool ellipsis = false);

#endif
