#ifndef CURRENCYCONVERTER_H
#define CURRENCYCONVERTER_H

#include "decorator.hpp"

class currencyconverter : public UnitConverter
{
  public:
    currencyconverter(){}
    currencyconverter(std::shared_ptr<UnitConverter> deco) : UnitConverter(deco){}
    virtual double convert(double inValue) = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
};

#endif //CURRENCYCONVERTER_H
