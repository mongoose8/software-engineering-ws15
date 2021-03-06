#ifndef CELSIUSTOFAHRENHEITCONVERTER_H
#define CELSIUSTOFAHRENHEITCONVERTER_H


#include "temparaturconverter.hpp"


class CelsiusToFahrenheitConverter : public temperatureconverter
{
  
public:
    CelsiusToFahrenheitConverter(){}
    CelsiusToFahrenheitConverter(std::shared_ptr<UnitConverter> decorate):temperatureconverter{decorate}{}
    double convert(double inCelsius);
    std::string toString() const;
    void print() const;
};

#endif // CELSIUSTOFAHRENHEITCONVERTER_H
