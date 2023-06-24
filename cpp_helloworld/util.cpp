#include "util.h"

using namespace helloworld;

std::string helloworld::indent_string(std::string input, int level)
{
	if (level >= 0)
	{
		for (int i = 0; i < indent_spacing + (level * indent_spacing); i++)
		{
			input.insert(0, " ");
		}
	}

	return input;
}
