#include <iostream>

#include "module.h"
#include "util.h"

using namespace helloworld;

module::module(std::string n, int i)
{
	name = n;
	indent_level = i;
}

void module::enter()
{
	std::cout << "\n";
	std::cout << indent_string("Entering " + name, indent_level);
	std::cout << "\n";
}

void module::exit()
{
	std::cout << "\n";
	std::cout << indent_string("Exiting " + name, indent_level);
	std::cout << "\n";
}
