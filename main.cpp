#include <iostream>
#include "color.hpp"

int main(int argc, char *argv[])
{

    std::cout << color::green_string("\nSync Tool - Starting up...") << std::endl;

    if (argc < 2)
    {
        std::cerr << color::red_string("Error: No command provided.") << std::endl;
        std::cerr << "Usage: sync_tool <command> [options]" << std::endl;
        std::cout << "\n...Sync Tool - Ending\n"
                  << std::endl;
        return 1;
    }

    std::string command = argv[1];

    if (command == "test-color")
    {
        color::print_test();
    }
    else if (command == "help")
    {
    }
    else if (command == "backup")
    {
        // must have two arguments src and dst
        if (argc < 4)
        {
            std::cerr << color::red_string("Error: Backup requires 2 arguments src and destination.") << std::endl;
            std::cout << "\n...Sync Tool - Ending\n"
                      << std::endl;
            return 1;
        }
        std::string source = argv[2];
        std::string destin = argv[3];
    }
    else if (command == "sync")
    {
    }
    else if (command == "check")
    {
    }
    else if (command == "ddup")
    {
    }
    // can I add feature to read external devices list them and use and sources.

    std::cout << "\n...Sync Tool - Ending\n"
              << std::endl;
    return 0;
}