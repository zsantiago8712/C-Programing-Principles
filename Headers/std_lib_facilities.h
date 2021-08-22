
//
// This is a standard library support code to the chapters of the book
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#ifndef STD_LIB_FACILITIES_GUARD
#define STD_LIB_FACILITIES_GUARD 1

#include <iostream>
#include <cmath>
#include <cstring>
#include <fstream>
#include <stdexcept>
#include <string>
#include <sstream>
#include <vector>



//------------------------------------------------------------------------------

// Helper function to show an error message
inline void error(const std::string& errormessage)
{
    throw std::runtime_error(errormessage);
}

//------------------------------------------------------------------------------

inline void error(std::string s1, std::string s2)
{
    error(s1+s2);
}

//------------------------------------------------------------------------------

#endif // STD_LIB_FACILITIES_GUARD