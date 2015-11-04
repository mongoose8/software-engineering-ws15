#ifndef CELSIUSTOKELVINCONVERTER_H
#define CELSIUSTOKELVINCONVERTER_H

#include "unitconverter.hpp"
#include "temparaturconverter.hpp"

class CelsiusToKelvinConverter : public temperatureconverter {
  public:
    CelsiusToKelvinConverter();
    double convert(double inCelsius);
    std::string toString() const;
    void print() const;
};

#endif // CELSIUSTOKELVINCONVERTER_H
