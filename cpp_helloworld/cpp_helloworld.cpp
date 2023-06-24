#include <iostream>

#include "module.h"

using namespace helloworld;

void init_modules()
{
    module main ("main", 1);
};

int main()
{
    std::cout << "Hello World!\n";

    module module1("module1", 1);
    module1.enter();

    int noclose;
    std::cin >> noclose;
}