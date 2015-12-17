#ifndef UNITCONVERTER_HPP
#define UNITCONVERTER_HPP

#include <iostream>
#include <string>
#include <memory>

class UnitConverter
{
  public:
    UnitConverter();
    UnitConverter(std::shared_ptr<UnitConverter> const& deco) : decorate{deco}{};
    
    virtual double convert(double inValue) = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
    
    
  protected:
		std::shared_ptr<UnitConverter> decorate;
  
};

#endif // UNITCONVERTER_HPP
