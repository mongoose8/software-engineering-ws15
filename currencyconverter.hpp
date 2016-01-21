#ifndef CURRENCYCONVERTER_H
#define CURRENCYCONVERTER_H

#include "decorator.hpp"

class currencyconverter : public UnitConverter
{
  public:
    currencyconverter(){}
    currencyconverter(std::shared_ptr<UnitConverter> deco) : UnitConverter(deco){}
    virtual double convert(double inValue) {}
    virtual std::string toString() {}
    virtual void print() {}
};

#endif //CURRENCYCONVERTER_H
