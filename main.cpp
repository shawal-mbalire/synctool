#include "color.hpp"
#include "features.hpp"
#include <iostream>

int main(int argc, char *argv[]) {

  std::cout << color::green_string("\nSync Tool - Starting up...") << std::endl;
  if (argc < 2) {
    std::cerr << color::red_string("Error: No command provided.") << std::endl;
    std::cerr << "Usage: sync_tool <command> [options]" << std::endl;
    std::cout << "\n...Sync Tool - Ending\n" << std::endl;
    return 1;
  }

  std::string command = argv[1];
  if (command == "test-color")
    color::print_test();
  else if (command == "help")
    features::help;
  else if (command == "list")
    features::list();
  else if (command == "backup") {
    if (argc < 4) {
      std::cerr
          << color::red_string(
                 "Error: Backup requires 2 arguments src and destination.")
          << std::endl;
      std::cout << "\n...Sync Tool - Ending\n" << std::endl;
      return 1;
    }
    std::string source = argv[2];
    std::string destin = argv[3];
    features::backup(source, destin);
  } else if (command == "sync") {
    // must have two arguments src and dst
    if (argc < 4) {
      std::cerr << color::red_string(
                       "Error: Sync requires 2 arguments src and destination.")
                << std::endl;
      std::cout << "\n...Sync Tool - Ending\n" << std::endl;
      return 1;
    }
    std::string source = argv[2];
    std::string destin = argv[3];
    features::sync(source, destin);
  } else if (command == "check") {
    if (argc < 3) {
      std::cerr << color::red_string("Error: Check requires 1 argument.")
                << std::endl;
      std::cout << "\n...Sync Tool - Ending\n" << std::endl;
      return 1;
    }
    std::string source = argv[2];
    features::check(source);
  } else if (command == "ddup") {
    if (argc < 3) {
      std::cerr << color::red_string(
                       "Error: Deduplicating requires 1 argument.")
                << std::endl;
      std::cout << "\n...Sync Tool - Ending\n" << std::endl;
      return 1;
    }
    std::string source = argv[2];
    features::ddup(source);
  } else {
    std::cerr << color::red_string("Error: Invalid command.") << std::endl;
    features::help();
  }

  std::cout << "\n...Sync Tool - Ending\n" << std::endl;
  return 0;
}
