#ifndef CURRENCYCONVERTER_H
#define CURRENCYCONVERTER_H

#include "unitconverter.hpp"

class currencyconverter : public UnitConverter
{
  public:
    currencyconverter();
    virtual double convert(double inValue) = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
};

#endif //CURRENCYCONVERTER_H
