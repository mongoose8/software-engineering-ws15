#ifndef TEMPARATURCONVERTER_H
#define TEMPARATURCONVERTER_H

#include "decorator.hpp"
#include "unitconverter.hpp"

class temperatureconverter : public UnitConverter
{
  public:
    temperatureconverter(){}
    temperatureconverter(std::shared_ptr<UnitConverter> deco) : UnitConverter(deco){}
    virtual double convert(double inValue) {}
    virtual std::string toString() {}
    virtual void print() {}

  
};

#endif //TEMPARATURCONVERTER_H
