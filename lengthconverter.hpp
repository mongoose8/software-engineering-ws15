#ifndef LENGTHCONVERTER_H
#define LENGTHCONVERTER_H

#include "unitconverter.hpp"

class lengthconverter : public UnitConverter
{
  public:
    lengthconverter(){}
    lengthconverter(std::shared_ptr<UnitConverter> deco) : UnitConverter(deco){}
    virtual double convert(double inValue) {}
    virtual std::string toString() {}
    virtual void print() {}
};

#endif //LENGTHCONVERTER_H
