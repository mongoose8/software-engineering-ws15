#ifndef DECORATOR_HPP
#define DECORATOR_HPP

#include <vector>
#include <memory>
#include "unitconverter.hpp"

class Decorator : public UnitConverter
 {
	public:
		Decorator() : decorate(nullptr){};
		Decorator(std::shared_ptr<UnitConverter> new_decorator) : decorate{new_decorator}{}
		
	protected:
		std::shared_ptr<UnitConverter> decorate;
 };
 
#endif //DECORATOR_HPP

