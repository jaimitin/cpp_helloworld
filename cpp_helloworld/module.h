#pragma once

#include <string>

namespace helloworld
{
	class module
	{
		
	public:

		module(std::string name, int indent_level);

		std::string name;
		int indent_level;

		void enter();
		void exit();

	};
}