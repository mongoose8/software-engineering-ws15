#ifndef COMMAND_H
#define COMMAND_H

#include "unitconverter.hpp"

struct Command
{
	Command(std::string cmd, double val):command{cmd},value{val}{
             if(cmd==" ")
              throw std::invalid_argument("");   
        }


	std::string command;
	double value;
};
#endif //COMMAND_H
