#ifndef INVERSE_HPP
#define INVERSE_HPP

#include "decorator.hpp"
#include "temparaturconverter.hpp"

class Inverse : public Decorator
{
	public:
        Inverse(std::shared_ptr<UnitConverter> invert) : Decorator{invert}{}
        double convert(double inValue);
	std::string toString() const;
	void print() const;
	
};

#endif //INVERSE_HPP
