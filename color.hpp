#include <iostream>

#ifndef COLOR_LIBRARY_H
#define COLOR_LIBRARY_H

namespace color
{ 
  // giving color to terminal text using ANSI escape codes.
  // noworry about background as that is not  needed
  std::string red_string(std::string msg){
    std::string err_str = "\033[31m"+msg+"\033[0m";
    return err_str;
  }
  std::string blue_string(std::string msg){
    std::string err_str = "\033[34m"+msg+"\033[0m";
    return err_str;
  }
  std::string green_string(std::string msg){
    std::string err_str = "\033[32m"+msg+"\033[0m";
    return err_str;
  }
  std::string yellow_string(std::string msg){
    std::string err_str = "\033[33m"+msg+"\033[0m";
    return err_str;
  }
  void print_test()
  {
    // text starts with \033[Xm and ends with \033[0m 
    std::cout << "\n";
    std::cout << red_string("Texting") << std::endl;       // Red text
    std::cout << green_string("Texting") << std::endl;       // Green text
    std::cout << yellow_string("Texting") << std::endl;       // Yellow text
    std::cout << blue_string("Texting") << std::endl;       // Blue text

    std::cout << "\033[3;42;30mTexting\033[0m\t\t";  // Green on blue background
    std::cout << "\033[3;43;30mTexting\033[0m\t\t";  // Yellow on green background
    std::cout << "\033[3;44;30mTexting\033[0m\t\t";  // Blue on yellow background
    std::cout << "\033[3;104;30mTexting\033[0m\t\t"; // Light blue on dark gray background
    std::cout << "\033[3;100;30mTexting\033[0m\n";   // Light green on black background

    std::cout << "\033[3;47;35mTexting\033[0m\t\t";  // Dark magenta on white background
    std::cout << "\033[2;47;35mTexting\033[0m\t\t";  // Light magenta on white background
    std::cout << "\033[1;47;35mTexting\033[0m\t\t";  // Bold dark magenta on white background
    std::cout << "\t\t";
    std::cout << "\n";
  }
}

#endif

// Name            FG  BG
// Black           30  40
// Red             31  41
// Green           32  42
// Yellow          33  43
// Blue            34  44
// Magenta         35  45
// Cyan            36  46
// White           37  47
// Bright Black    90  100
// Bright Red      91  101
// Bright Green    92  102
// Bright Yellow   93  103
// Bright Blue     94  104
// Bright Magenta  95  105
// Bright Cyan     96  106
// Bright White    97  107