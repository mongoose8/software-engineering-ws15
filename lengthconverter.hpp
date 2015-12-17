#ifndef LENGTHCONVERTER_H
#define LENGTHCONVERTER_H

#include "unitconverter.hpp"

class lengthconverter : public UnitConverter
{
  public:
    lengthconverter(){}
    lengthconverter(std::shared_ptr<UnitConverter> deco) : UnitConverter(deco){}
    virtual double convert(double inValue) = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
};

#endif //LENGTHCONVERTER_H
