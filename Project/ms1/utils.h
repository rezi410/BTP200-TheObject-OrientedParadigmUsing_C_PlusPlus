/* Citation and Sources...
Final Project Milestone 1
Module: Time, utils
Filename: Time.h, Time.cpp, utils.h, utils.cpp
Version 1.0
Author	John Doe
Revision History
-----------------------------------------------------------
Name      Reziyemu Sulaiman
Date      Reason
2020/3/17  Preliminary release
2020/?/?  Debugged DMA
-----------------------------------------------------------
I have done all the coding by myself by reading course notes and watching the lectures.
-----------------------------------------------------------
-----------------------------------------------------------*/




#ifndef SDDS_UTILS_H_
#define SDDS_UTILS_H_
#include <iostream>
namespace sdds {
   extern bool debug; // making sdds::debug variable global to all the files
                      // which include: "utils.h"

   int getTime(); // returns the time of day in minutes

   int getInt(const char* prompt = nullptr);        // User entry prompt

   int getInt(
      int min,   // minimum acceptable value
      int max,   // maximum acceptable value
      const char* prompt = nullptr,  // User entry prompt
      const char* errorMessage = nullptr, // Invalid value error message
      bool showRangeAtError = true    // display the range if invalud value entered 
   );

   char* getcstr(
      const char* prompt = nullptr,   // User entry prompt
      std::istream& istr = std::cin,  // the Stream to read from
      char delimiter = '\n'    // Delimiter to mark the end of data
   );

   

}
#endif // !SDDS_UTILS_H_

