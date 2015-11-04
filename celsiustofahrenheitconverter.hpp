#ifndef CELSIUSTOFAHRENHEITCONVERTER_H
#define CELSIUSTOFAHRENHEITCONVERTER_H

#include "unitconverter.hpp"
#include "temparaturconverter.hpp"

class CelsiusToFahrenheitConverter : public temperatureconverter {
  public:
    CelsiusToFahrenheitConverter();
    double convert(double inCelsius);
    std::string toString() const;
    void print() const;
};

#endif // CELSIUSTOFAHRENHEITCONVERTER_H
