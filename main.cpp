#include <iostream>

int main(int argc, char* argv[]) {

    std::cout << "Secure Deduplicating Sync Tool - Starting up..." << std::endl;

    if (argc < 2) {
        std::cerr << "Error: No command provided. Usage: sync_tool <command> [options]" << std::endl;
        return 1;
    }

    std::string command = argv[1];
    std::cout << "Received command: " << command << std::endl;

    return 0; 
}