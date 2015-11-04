#ifndef TEMPARATURCONVERTER_H
#define TEMPARATURCONVERTER_H

#include "unitconverter.hpp"

class temperatureconverter : public UnitConverter
{
  public:
    temperatureconverter();
    virtual double convert(double inValue) = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
};

#endif //TEMPARATURCONVERTER_H
