#include <iostream>
#include "color.hpp"

#ifndef FEATURES_LIBRARY_H
#define FEATURES_LIBRARY_H

namespace features{
    void backup(std::string source, std::string desti){
        std::cout << color::blue_string("Backing up")<< std::endl;
    }
    void sync(std::string source, std::string desti){
        std::cout << color::blue_string("Syncing")<< std::endl;
    }
    void check(std::string source){
        std::cout << color::blue_string("Checking dir")<< std::endl;
    }
    void ddup(std::string source){
        std::cout << color::blue_string("Deduplicating")<< std::endl;
    }
    void list(){
        std::cout << color::blue_string("Listing devices")<< std::endl;
    }
    void help(){
       std::cout << color::blue_string("Help")<< std::endl; 
    }
}

#endif