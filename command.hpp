#ifndef COMMAND_H
#define COMMAND_H

#include "unitconverter.hpp"

struct Command
{
	Command(std::string cmd, double val):command{cmd},value{val}{}


	std::string command;
	double value;
};
#endif //COMMAND_H
