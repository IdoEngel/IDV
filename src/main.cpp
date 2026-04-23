#include <iostream>
#include "../header/Tests/Tests.hpp"


int main(int argc, char **argv) {
    Tests::Manager manager(argc, argv);

    std::cout << "Hello, IDV!!" << std::endl;

    return manager.runAll();
}