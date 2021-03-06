#include "inverse.hpp"
#include <memory>

double Inverse::convert(double inValue)
{
	if(std::shared_ptr<temperatureconverter> check = std::dynamic_pointer_cast<temperatureconverter>(decorate))
	{
		std::cout << "can not inverse" << std::endl;
		return 0;
	}
	return inValue * inValue/ (decorate->convert(inValue));
}

std::string Inverse::toString() const
{
	return "Inverse " + decorate->toString();
}
   
void Inverse::print() const
{
	std::cout<<this->toString();
} 
