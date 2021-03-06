#ifndef CELSIUSTOKELVINCONVERTER_H
#define CELSIUSTOKELVINCONVERTER_H


#include "temparaturconverter.hpp"

class CelsiusToKelvinConverter : public temperatureconverter {
  public:
    CelsiusToKelvinConverter(){}
    CelsiusToKelvinConverter(std::shared_ptr<UnitConverter> decorate):temperatureconverter{decorate}{};
    double convert(double inCelsius);
    std::string toString() const;
    void print() const;
};

#endif // CELSIUSTOKELVINCONVERTER_H
